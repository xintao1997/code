#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;


namespace bit
{

	class string
	{
		friend ostream& operator<<(ostream &out, const string &s);
	public:
		string(const char *str = "")
		{
			m_size = strlen(str);
			m_capacity = m_size;
			m_str = new char[m_capacity + 1];
			strcpy(m_str, str);
		}
		string(const string &s) :m_str(nullptr), m_capacity(0), m_size(0)
		{
			string tmp(s.m_str);
			Swap(tmp);
		}
		string& operator=(const string &s)
		{
			if (this != &s)
			{
				string tmp(s);
				Swap(tmp);
			}
			return *this;
		}
		~string()
		{
			if (m_str)
			{
				delete[]m_str;
				m_str = nullptr;
				m_capacity = m_size = 0;
			}
		}
	public:
		typedef char* iterator;
	public:
		iterator begin()
		{
			return m_str;
		}
		iterator end()
		{
			return m_str + m_size;
		}

	public:
		void push_back(char ch)
		{
			if (m_size >= m_capacity)
			{
				int new_capacity = (m_capacity == 0 ? 1 : m_capacity * 2);
				reserve(new_capacity);
				m_str[m_size++] = ch;
				m_str[m_size] = '\0';
			}
		}
		void clear()
		{
			m_size = 0;
			m_str[0] = '\0';
		}
	public:
		void reserve(size_t new_capacity)
		{
			if (new_capacity > m_capacity)
			{
				char *new_str = new char[new_capacity];
				m_capacity = new_capacity;
				strcpy(new_str, m_str);
				delete[]m_str;
				m_str = new_str;
			}
		}
		void resize(size_t new_size,char c='\0')
		{
			if (new_size > m_size)
			{
				if (new_size > m_capacity)
				{
					reserve(new_size);
				}
				memset(m_str + m_size, c, new_size - m_size);
			}
			m_str[new_size] = '\0';
			m_size = new_size;
		}
		void Swap(string &s)
		{
			swap(m_str, s.m_str);
			swap(m_size, s.m_size);
			swap(m_capacity, s.m_capacity);
		}
	public:
		size_t size()const
		{
			return m_size;
		}
		size_t capacity()const
		{
			return m_capacity;
		}
	private:
		char *m_str;
		size_t m_capacity;
		size_t m_size;
	};
}

ostream& bit::operator<<(ostream &out, const string &s)
{
	out << s.m_str;
	return out;
}

void main()
{
	bit::string s("hello");
	bit::string s1;
	s1 = s;
	cout << "s = "<<s << endl;
	cout << "s1 = " << s1 << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;
	s.reserve(20);
	cout << "s = " << s << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;



}