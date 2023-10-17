    #include <iostream>
    #include <Windows.h>
    #include <bitset>
    #include <vector>
    #include <fstream>
    #include <string>
    #include <time.h>

    using namespace std;

    inline void first_a() {
        unsigned char x = 255;
        unsigned char maska = 1;
        x = x & (~(maska << 4));

        cout << (int)x;
    }

    inline void first_b() {
        unsigned char x = 57;
        unsigned char maska = 1;
        x = x | (maska << 6);

        cout << (int)x;
    }

    void first_v() {
        unsigned int x = 25;
        const int n = sizeof(int) * 8;
        unsigned maska = (1 << (n - 1));
        cout << "Mask: " << bitset<n>(maska) << endl;
        cout << "Result: ";
        for (int i = 1; i <= n; i++) {

            cout << (((x & maska)) >> (n - i));
            maska = maska >> 1;
        }

        cout << endl;
        system("pause");
    }

    void second_a() {
        cout << "Enter size from 1 to 8" << endl;
        int n, num;
        unsigned char maska, bit_mas = 0;
        cin >> n;
        int* mas = new int[n];
        for (int i = 0; i < n; i++) {
            cout << "Enter an element from 0 to 7: ";
            cin >> num;
            mas[i] = num;
        }
        for (int i = 0; i < n; i++) {
            maska = 1;
            maska = (maska << (mas[i]));
            bit_mas = bit_mas | maska;
        }
        for (int i = 0; i < 8; i++) {
            if ((bit_mas & 1) == 1)
                cout << i << " ";
            bit_mas >>= 1;
        }
        cout << endl;
    }

    void second_b() {
        int n, num;
        unsigned long long int maska, bit_mas = 0;
        cout << "Enter size from 0 to 64: ";
        cin >> n;
        int* mas = new int[n];
        for (int i = 0; i < n; i++) {
            cout << "Enter an element from 0 to 64: ";
            cin >> num;
            mas[i] = num;
        }
        for (int i = 0; i < n; i++) {
            maska = 1;
            maska = (maska << (mas[i]));
            bit_mas = bit_mas | maska;
        }
        for (int i = 0; i < sizeof(bit_mas) * 8; i++) {
            if ((bit_mas & 1) == 1)
                cout << i << " ";
            bit_mas >>= 1;
        }
        cout << endl;
    }

    void second_v() {
        int n, ch;
        unsigned char maska = 1;
        cout << "Enter size from 0 to 64: ";
        cin >> n;
        vector <unsigned char> mas(8);
        for (int i = 0; i < n; i++) {
            cout << "Enter an element from 0 to 64: ";
            cin >> ch;
            mas[ch / 8] = mas[ch / 8] | (maska << ch % 8);
        }
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if ((mas[i] & 1) == 1)
                    cout << 8 * i + j << " ";
                mas[i] >>= 1;
            }
        }
    }

    void third() {
        const int n = 10000000/8;
        int start = clock();
        unsigned char maska = 1;
        vector <unsigned char> bit_mas(n);
        string path = "Test.txt";
        ifstream fin;
        fin.open(path);
        if (!fin.is_open())
            cout << "Open error" << endl;
        else {

            int ch;

            while (!fin.eof()) {
                fin >> ch;
                bit_mas[ch / 8] = bit_mas[ch / 8] | (maska << ch % 8);
            }
        }
        fin.close();
        int stop = clock();
        ofstream fout;
        fout.open(path);
        if (!fout.is_open())
            cout << "Open error" << endl;
        else {
            for (int i = 0; i < (n); i++) {
                for (int j = 0; j < 8; j++) {
                    if ((bit_mas[i] & 1) == 1)
                        fout << 8 * i + j << endl;
                    bit_mas[i] >>= 1;
                }
            }
        }
        fout.close();
        int resTime = stop - start;
        bit_mas.shrink_to_fit();
        cout << bit_mas.capacity() << " b" << endl;
        cout << bit_mas.capacity() / 1024 << " kb" << endl;
        cout << bit_mas.capacity() / (1024 * 1024) << " mb" << endl;
        cout << "Time: " << resTime << " ms \n";
    }

    void create_file() {

        const long n = 1000000;
        const long n_max = 9999999;
        const int len = n_max - n + 1;
        long* array = new long [len];

        for (long i = 0; i < len; i++) {
            array[i] = n + i;
        }

        srand(time(NULL));

        for (long i = 0; i < len; i++)
            swap(array[i], array[rand() % len]);

        ofstream fout;
        fout.open("Test.txt");


        if (!fout.is_open())
            cout << "Open error" << endl;
        else {
            for (int i = 0; i < len; i++)
                fout << array[i] << endl;
        }
        fout.close();
    }

    int main() {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        cout << "Choose number of exercise (1, 2, 3): ";
        char letter;
        int n;
        cin >> n;
        switch (n) {
            case 1:
                cout << "Choose a, b or c: ";
                cin >> letter;
                if (letter == 'a')
                    first_a();
                else if (letter == 'b')
                    first_b();
                else
                    first_v();
                break;
            case 2:
                cout << "Choose a, b or c: ";
                cin >> letter;
                if (letter == 'a')
                    second_a();
                else if (letter == 'b')
                    second_b();
                else
                    second_v();
                break;
            case 3:
                //create_file();
                third();
                break;
            default:
                break;
        }
        return 0;
    }
