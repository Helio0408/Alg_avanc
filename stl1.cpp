#include <iostream>
#include <string>
using namespace std;

int main() {
    int num_casos, num, t_max, m_tempo;
    string alvo;

	string *materia;
	int *tempo;

    cin >> num_casos;

    for(int i = 0; i < num_casos; i++) {
            cin >> num;

			materia = new string[num];
			tempo = new int[num];

            for(int j = 0; j < num; j++)
                cin >> materia[j] >> tempo[j];

            cin >> t_max >> alvo;

            for(int j = 0; j < num; j++)
                if(materia[j] == alvo)
                    m_tempo = j;

            if(m_tempo <= t_max)
                cout << "Ufa!" << endl;
            else if(m_tempo <= (t_max + 5))
                cout << "Atrasado" << endl;
            else
                cout << "Deu ruim! Va trabalhar" << endl;

			delete materia;
			delete tempo; 
        }

    return 0;
}