#include"��ͷ.h"

int count = 0, n;
int main()
{   
    
    int command, i, flag = 0;//commandΪ����ָ�i��������flag�ж������Ƿ���ȷ
    char c=0, Password[6];
    STU* h = NULL;
    printf("����������(3�λ���)\n");
    for (i = 0; i < 3; i++)
    {
        int x = 0;
        while (x < 5 && c != 13)//13�ǻس�����ASCII��
        {
            c = getchar();
            Password[x++] = c;
            if (c != 13)
                putchar('*');//�����������*����ʽ��ʾ
        }
        Password[x] = '\0';
        if (strcmp(Password, "12345") == 0)
        {
            flag = 1;
            break;//���������ȷ������ѭ��
        }
        else
            if (i == 2)
                printf("\n��������˳�ϵͳ��");
            else
                printf("\n���������������ȷ���룺");
    }
    if (flag)
    {
        showMenu();
        printf("��ѡ��");
        scanf("%d", &command);
        printf("\n");
        while (1)//����command��ִֵ�в�ͬ��ֵ
        {
            switch (command) {
            case 1: {
                printf("��������Ҫ�����İ༶������");
                scanf("%d", &count);
                printf("��ʼ���༶����Ϊ%d��\n", count);
            }; break;
            case 2: {
                h = createClass(count);
                printf("ѧ����Ϣ¼��ɹ���\n");
            }; break;
            case 3: {
                showStuInfo(h);
                printf("ѧ����Ϣ��ʾ�ɹ���\n");
            }; break;
            case 4: {
                printf("������ѧ����ѧ�ţ�");
                scanf("%d", &n);
                searchStuInfo(h, n);
            }; break;
            case 5: {
                sortStuInfo(h);
                printf("����ɹ���\n");
            }; break;
            case 6:countStuInfo(h); break;
            case 7:h = deleteStuInfo(h); break;
            case 8:addStuInfo(h);; break;
            case 9: {
                printf("������Ҫ�޸ĵ�ѧ����ѧ�ţ�");
                scanf("%d", &n);
                changeStuInfo(h, n);
            }; break;
            case 10:saveStuInfo(h); break;
            case 11:h = loadStuInfo(h); break;
            case 0:exit(0);//�˳�ϵͳ
            }
            printf("�����⽡����");
            getchar();//�ó�����ͣһ�£������������
            system("cls");//�����Ļ
            showMenu();
            printf("��ѡ��");
            scanf("%d", &command);
        }
    }
    return 0;
}
void showMenu()
{
    printf("\n������ȷ��\n");
    printf("------ѧ����Ϣ����ϵͳV2.0--------\n");
    printf("*       1. �����༶              *\n");
    printf("*       2. ѧ����Ϣ¼��          *\n");
    printf("*       3. ѧ����Ϣ��ʾ          *\n");
    printf("*       4. ѧ����Ϣ��ѯ          *\n");
    printf("*       5. ѧ����Ϣ����          *\n");
    printf("*       6. ѧ����Ϣͳ��          *\n");
    printf("*       7. ѧ����Ϣɾ��          *\n");
    printf("*       8. ѧ����Ϣ����          *\n");
    printf("*       9. ѧ����Ϣ�޸�          *\n");
    printf("*       10. ѧ����Ϣ����         *\n");
    printf("*       11.ѧ����Ϣ����          *\n");
    printf("*       0. �˳�ϵͳ              *\n");
    printf("----------------------------------\n");
    printf("*  ���ߣ��˷���ѧ�ţ�092620209   *\n");
    printf("----------------------------------\n");
}
STU* createClass(int n)//nΪҪ�����ĸ���
{
    STU* p, * q=NULL, * h = NULL;//hΪͷָ�룬pָ���´�����ѧ����qָ�����һ��ѧ��
    int i;
    for (i = 0; i < n; i++)
    {
        p = (STU*)malloc(sizeof(STU));
        printf("�������%d��ѧ����ѧ�š�����������Ӣ�ɼ���", i + 1);
        scanf("%d%s%d%d%d", &p->data.sid, p->data.name, &p->data.score[0], &p->data.score[1], &p->data.score[2]);
        p->data.total = p->data.score[0] + p->data.score[1] + p->data.score[2];
        p->data.aver = p->data.total / M;
        p->data.order = 0;
        p->next = NULL;
        if (i == 0)
            h = p;//��ͷָ��̶�������ͷ��
        else
            q->next = p;//������ĩβ���´�����ѧ����������
        q = p;//qָ��ָ���´�����ѧ���������ĩβ
    }
    return h;//����ͷָ��
}
void showStuInfo(STU* h)//hΪͷָ��
{
    STU* p;
    p = h;
    printf("|����  |ѧ��  |����  |����  |��ѧ  |Ӣ��  |�ܷ�  |ƽ����|\n");
    while (p != NULL)
    {
        printf("|%-6d|%-6d|%-6s|%-6d|%-6d|%-6d|%-6.0f|%-6.2f|\n", p->data.order, p->data.sid, p->data.name, p->data.score[0], p->data.score[1], p->data.score[2], p->data.total, p->data.aver);
        p = p->next;//��ǰѧ����Ϣ��Ӧ�����pָ����һ��ѧ��
    }
}

void searchStuInfo(STU* h, int n)//hΪͷָ�룬nΪѧ��
{
    STU* p;
    p = h;
    int flag = 0;
    while (p != NULL)
    {
        if (p->data.sid == n)//ѧ��ƥ�������
        {
            printf("|����  |ѧ��  |����  |����  |��ѧ  |Ӣ��  |�ܷ�  |ƽ����|\n");
            printf("|%-6d|%-6d|%-6s|%-6d|%-6d|%-6d|%-6.0f|%-6.2f|\n", p->data.order, p->data.sid, p->data.name, p->data.score[0], p->data.score[1], p->data.score[2], p->data.total, p->data.aver);
            flag = 1;
            break;
        }
        else//ѧ�Ų�ƥ����ָ����һ��ѧ��
            p = p->next;
    }
    if (flag)//�����ѯ���
        printf("��ѯ��ϣ�\n");
    else
        printf("���޴��ˣ�\n");
}

void countStuInfo(STU* h)//hΪͷָ��
{
    STU* p, * r, * s;
    INFO t;
    p = h;//ָ���һ���ڵ�
    r = p->next;//ָ��ڶ����ڵ�
    s = r->next;//ָ��������ڵ�
    int i, c = 0, m = 0, y = 0;
    while (p != NULL)
    {
        if (p->data.score[0] < 60)c++;
        if (p->data.score[1] < 60)m++;
        if (p->data.score[2] < 60)y++;
        p = p->next;
    }
    for (i = 0; i < 3; i++)
    {
        p = h;
        while (p != NULL)
        {
            while (r != NULL)
            {
                if (p->data.score[i] < r->data.score[i])//���ǰһ��С�ں�һ���򽻻�
                {
                    t = p->data;
                    p->data = r->data;
                    r->data = t;
                }
                else
                    r = r->next;
            }
            p = p->next;
            r = s;
        }
        p = h;
        switch (i)
        {
        case 0:printf("������ߣ�"); break;
        case 1:printf("��ѧ��ߣ�"); break;
        case 2:printf("Ӣ����ߣ�");
        }
        printf("%s %d��\n", p->data.name, p->data.score[i]);
    }
    printf("����������ͳ�ƣ�\n");
    printf("���ģ�%d��\n��ѧ��%d��\nӢ�%d��\n", c, m, y);

}
void sortStuInfo(STU* h)//hΪͷָ��
{
    int x, i = 1;
    INFO t;
    STU* p, * r, * s;
    p = h;//ָ���һ���ڵ�
    r = p->next;//ָ��ڶ����ڵ�
    s = r->next;//ָ��������ڵ�
    printf("�ܷ���������0\n������������1\n��ѧ��������2\nӢ����������3\n");
    printf("�����룺");
    scanf("%d", &x);
    if (x)
    {
        while (p != NULL)
        {
            while (r != NULL)
            {
                if (p->data.score[x - 1] < r->data.score[x - 1])//���ǰһ��С�ں�һ���򽻻�
                {
                    t = p->data;
                    p->data = r->data;
                    r->data = t;
                }
                else
                    r = r->next;
            }
            p = p->next;
            r = s;
        }
    }
    else
    {
        while (p != NULL)
        {
            while (r != NULL)
            {
                if (p->data.total < r->data.total)//���ǰһ��С�ں�һ���򽻻�
                {
                    t = p->data;
                    p->data = r->data;
                    r->data = t;
                }
                else
                    r = r->next;
            }
            p = p->next;
            r = s;
        }
    }
    p = h;
    while (p != NULL)
    {
        p->data.order = i++;
        p = p->next;
    }
}

STU* deleteStuInfo(STU* h)//hΪͷָ�룬sΪѧ��
{
    STU* head, * p, * q;
    head = h;
    int s;
    if (count == 0)
    {
        printf("�༶Ϊ�գ�\n");
        return head;
    }
    p = h;
    q = p->next;
    printf("������Ҫɾ����ѧ����ѧ�ţ�");
    scanf("%d", &s);
    printf("\n");
    if (p->data.sid == s)//�����ͷ�ڵ㣬ֱ�ӷ��صڶ���
    {
        printf("ɾ���ɹ���\n");
        return q;
    }
    else
    {
        while (q != NULL)
        {
            if (q->data.sid == s)
            {
                p->next = q->next;
                printf("ɾ���ɹ���\n");
                return head;
            }
            else
            {
                p = p->next;
                q = p->next;
            }
        }
        printf("���޴��ˣ�\n");
        return head;
    }
}

void addStuInfo(STU* h)//hΪͷָ��
{
    STU* p, * q;
    p = h;
    while (p != NULL)
    {
        if (p->next == NULL)
        {
            count++;//������һ
            if (count > N)
                printf("�����������\n");
            else
            {
                q = (STU*)malloc(sizeof(STU));
                printf("��������ӵ�ѧ����ѧ�š��������ɼ���");
                scanf("%d%s%d%d%d", &q->data.sid, q->data.name, &q->data.score[0], &q->data.score[1], &q->data.score[2]);
                q->data.total = q->data.score[0] + q->data.score[1] + q->data.score[2];
                q->data.aver = q->data.total / M;
                q->data.order = 0;
                q->next = p->next;
                p->next = q;
                printf("��ӳɹ���\n");
                break;
            }
        }
        p = p->next;
    }
}

void changeStuInfo(STU* h, int n)//hΪͷָ��
{
    int flag = 0;
    STU* p;
    p = h;
    while (p != NULL)
    {
        if (p->data.sid == n)
        {
            printf("������ѧ����ѧ�š�����������Ӣ�ɼ���");
            scanf("%d%s%d%d%d", &p->data.sid, p->data.name, &p->data.score[0], &p->data.score[1], &p->data.score[2]);
            p->data.total = p->data.score[0] + p->data.score[1] + p->data.score[2];
            p->data.aver = p->data.total / M;
            p->data.order = 0;
            printf("�޸ĳɹ���\n");
            flag = 1;
            break;
        }
        else
            p = p->next;
    }
    if (flag == 0)
        printf("���޴��ˣ�\n");
}

void saveStuInfo(STU* h)//hΪͷָ��
{
    STU* p;
    FILE* fp;
    p = h;
    fp = fopen("data.txt", "w");
    if (fp == NULL)
    {
        printf("�޷����ļ���");
        exit(0);
    }
    else
    {
        fprintf(fp, "%d\n", count);//����ѧ��������Ϣ
        while (p != NULL)
        {
            fprintf(fp, "%d%s\n%d\n%d\n%d\n%f\n%f\n%d\n", p->data.sid, p->data.name, p->data.score[0], p->data.score[1], p->data.score[2], p->data.total, p->data.aver, p->data.order);//����ѧ����Ϣ
            p = p->next;
        }
    }
    fclose(fp);
    printf("����ɹ�\n");
}

STU* loadStuInfo(STU* h)//hΪͷָ��
{
    int i;
    STU* p, * q=NULL;
    FILE* fp;
    fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        printf("�޷����ļ���");
        exit(0);
    }
    else
    {
        fscanf(fp, "%d\n", &count);//��ȡѧ��������Ϣ
        printf("|����  |ѧ��  |����  |����  |��ѧ  |Ӣ��  |�ܷ�  |ƽ����|\n");
        for (i = 1; i < count; i++)
        {
            p = (STU*)malloc(sizeof(STU));
            fscanf(fp, "%d%s%d%d%d%lf%lf%d", &p->data.sid, p->data.name, &p->data.score[0], &p->data.score[1], &p->data.score[2], &p->data.total, &p->data.aver, &p->data.order);
            printf("|%-6d|%-6d|%-6s|%-6d|%-6d|%-6d|%-6.0f|%-6.2f|\n", p->data.order, p->data.sid, p->data.name, p->data.score[0], p->data.score[1], p->data.score[2], p->data.total, p->data.aver);
            p->next = NULL;
            if (i == 1)
                h = p;//��ͷָ��̶�������ͷ��
            else
                q->next = p;//������ĩβ���´�����ѧ����������
            q = p;//qָ��ָ���´�����ѧ���������ĩβ
        }
        printf("��ȡ�ɹ�\n");
    }
    fclose(fp);
    return h;
}
