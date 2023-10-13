#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<assert.h>
namespace TY
{
	
	class string
	{
	public:
		typedef char* iterator;
		typedef const char* const_iterator;
		string(const char* str="")
		{
			_size = strlen(str);
			_capacity = _size;
			_str = new char[_capacity+1];
			strcpy(_str, str);
		}
		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = 0;
			_capacity = 0;
		}
		size_t size()
		{
			return _size;
		}
		iterator begin()
		{
			return _str;
		}
		iterator end()
		{
			return _str + _size;
		}
		const_iterator begin() const
		{
			return _str;
		}
		const_iterator end() const
		{
			return _str + _size;
		}
		char& operator[](size_t pos)
		{
			assert(pos < _size);
			return _str[pos];
		}
		const char& operator[](size_t pos) const
		{
			assert(pos < _size);
			return _str[pos];
		}
		void reserve(size_t n = 0)
		{
			if (n > _capacity)
			{
				_capacity = n;
				char* tmp = new char[n+1];
				strcpy(tmp, _str);
				delete[] _str;
				_str = tmp;
				tmp = nullptr;
			}
		}
		void push_back(char c)
		{
			if (_size == _capacity)
			{
				reserve(_capacity == 0 ? 4 : _capacity * 2);
			}
			_str[_size++] = c;
			_str[_size] = '\0';
		}

		string& append(const char* s)
		{
			size_t len = strlen(s);
			if (len + _size > _capacity)
			{
				reserve(_size+len);
			}
			strcpy(_str + _size, s);
			_size += len;
			return *this;
		}
		string& operator+= (const char* s)
		{
			append(s);
			return *this;

		}
		string& operator+= (const char s)
		{
			push_back(s);
			return *this;

		}
		const char* c_str() const
		{
			return _str;
		}
		string& insert(size_t pos, size_t n, char c)
		{
			assert(pos <= _size);
			if (_size + n > _capacity)
				reserve(_size + n);
			size_t end = _size;
			while (end >= pos && end != npos)
			{
				_str[end + n] = _str[end];
				--end;
			}
			for (size_t i = pos; i < pos+n; i++)
			{
				_str[i] = c;
			}
			_size += n;
			return *this;
		}
		string& insert(size_t pos, const char* s)
		{
			assert(pos <= _size);
			size_t len = strlen(s);
			if (_size + len > _capacity)
				reserve(_size + len);
			size_t end = _size;
			while (end >= pos && end != npos)
			{
				_str[end + len] = _str[end];
				--end;
			}
			for (size_t i = 0; i < len; i++)
			{
				_str[pos + i] = s[i];
			}
			_size += len;
			return *this;
		}
		void erase(size_t pos, size_t len = npos)
		{
			assert(pos <= _size);
			if (len+pos > _size || len==npos)
			{
				_size = pos;
				_str[_size] = '\0';
			}
			else
			{
				size_t end = pos + len;
				while (end <= _size)
				{
					_str[end - len] = _str[end++];
				}
				_size -= len;
			}
		}
		size_t find(char ch, size_t pos = 0)
		{
			assert(pos <= _size);
			for (size_t i = 0; i < _size; i++)
			{
				if (_str[i] == ch)
				{
					return i;
				}
			}
			return npos;
		}
		size_t find(const char* str, size_t pos = 0)
		{
			assert(pos <= _size);
			const char* res = strstr(_str + pos, str);
			if (res)
			{
				return res - _str;
			}
			else
			{
				return npos;
			}
		}
		string substr(size_t pos = 0, size_t len = npos)
		{
			assert(pos < _size);

			size_t n = len;
			if (len == npos || pos + len > _size)
			{
				n = _size - pos;
			}

			string tmp;
			tmp.reserve(n);
			for (size_t i = pos; i < pos + n; i++)
			{
				tmp+=_str[i];
			}
			return tmp;
		}
		string(const string& s)
		{
			_str = new char[s._capacity + 1];
			strcpy(_str, s._str);
			_size = s._size;
			_capacity = s._capacity;
		}
		void clear()
		{
			_str[0] = '\0';
			_size = 0;
		}
		void resize(size_t n, char ch = '\0')
		{
			if (n < _size)
			{
				_size = n;
				_str[_size] = '\0';
			}
			else
			{
				reserve(n);
				while (n != _size)
				{
					_str[_size++] = ch;
				}
				_str[_size++] = '\0';
			}
		}
		bool operator<(const string& s) const
		{
			bool ret = memcpy(_str, s._str,_size < s._size ? _size : s._size);
			return ret == 0 ? _size < s._size : ret < 0;
		}
		bool operator==(const string& s) const
		{
			if (_size != s._size)
				return false;
			return memcpy(_str, s._str, _size) == 0 ? 1 : -1;
		}




	private:

		size_t _size;
		size_t _capacity;
		char* _str;
	public:
		const static size_t npos=-1;
	};






	ostream& operator<<(ostream& out, const string& s)
	{
		for (auto ch : s)
		{
			out << ch;
		}

		return out;
	}
	istream& operator>>(istream& in, string& s)
	{
		s.clear();
		char ch = in.get();
		while (ch == ' ' || ch == '\0')
		{
			ch = in.get();
		}
		char buff[128] = { '\0' };
		int i = 0;
		while (ch != ' ' || ch != '\0')
		{
			buff[i++] = ch;
			if (i == 127)
			{
				buff[i] = '\0';

				s += buff;
				i = 0;
			}
		}
		if (i != 0)
		{
			buff[i] = '\0';
			s += buff;
		}
		return in;
	}

}
