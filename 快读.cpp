#include <bits/stdc++.h>

namespace FastIO
{
    using namespace std;

    struct instream
    {
        int base = 10;

        friend instream &operator>>(instream &in, int &num)
        {
            int flag = 1;
            int ans = 0;
            char ch = getchar();
            while (ch < '0' || ch > '9')
            {
                if (ch == '-')
                {
                    flag = -flag;
                }
                ch = getchar();
            }

            while (ch >= '0' && ch <= '9')
            {
                ans = ans * in.base + (ch - '0');
                ch = getchar();
            }
            num = ans * flag;
            return in;
        }
    };

    struct outstream
    {
        template <typename _CharT, typename _Traits = char_traits<_CharT>>
        struct typ
        {
            typedef basic_ostream<_CharT, _Traits> &(*end)(basic_ostream<_CharT, _Traits> &);
        };

        int base = 10;

        friend outstream &operator<<(outstream &out, int num)
        {
            if (num < 0)
            {
                putchar('-');
                num = -num;
            }
            if (num >= 10)
            {
                out << num / 10;
            }
            putchar(num % 10 + '0');
            return out;
        }

        friend outstream &operator<<(outstream &out, const char *s)
        {
            printf("%s", s);
            return out;
        }

        friend outstream &operator<<(outstream &out, string s)
        {
            cout << s;
            return out;
        }

        friend outstream &operator<<(outstream &out, typ<char>::end e)
        {
            puts("");
            return out;
        }
    };

    instream fin;
    outstream fout;
}

using namespace std;
using namespace FastIO;

int main()
{
    int n;
    fin >> n;
    fout << n;
    return 0;
}