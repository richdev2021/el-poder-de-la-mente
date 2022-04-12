#include <math.h>
#include <iostream>
#include <string.h>
#include <string>
using namespace std;
bool inicio, aldea_o_visita = 0, conoir, mechon, tienda, comprar, reiniciar;
int interaccionesa = 0, dinero = 0;
string personaje, items[2][2], familiara, gente, limpiapantallas;
int main()
{
	items[0][0] = "nada";
	items[1][0] = "nada";
	items[0][1] = "nada";
	items[1][1] = "nada";
	cout << "hola y se bienvenido a esta historia interactiva en la cual tu objetivo es derrotar al  jefe final de la masmorra asi que equipate bien consigue dinero y haz lo posible para poder conseguir" << endl;
	cout << "comida recursos armaduras y armas, alistate para tu aventura ¿quieres iniciar este emocionante juego?(1 para si y cualquier otra cosa para no)" << endl;
	cin >> inicio;
	if (inicio == false) {
		cout << "bueno entonces sera despues" << endl;
		return 0;
	}
	cout << "bien entonces ¿iniciemos pero primero como quieres llamar a tu personaje(no uses espacios si quieres usarlos pon _?" << endl;
	cin >> personaje;
	cout << "ok " << personaje << endl;
	cout << "todo inicia de esta forma estas en un mundo en el cual los animales pueden hablar pero lo que dicen son cosas que no tienen sentido una de estas es cada vez esta peor pero sin darle inportancia decides continuar en fin la aventura de tu vida te espera" << endl;
	cout << "asi que que decides hacer primero? ir a tu casa a despedirte de tus familiares por el peligro que representa esta aventura o ir a la aldea cercana para recojer recursoso y comprar?" << endl;
	cout << "(1 para ir con tu familia y 0 para ir directo a la aldea)" << endl;
	cin >> aldea_o_visita;
	system("cls");
	if (aldea_o_visita) {
		cout << "al haver decidido ir a la aldea en la cual te criaste te tomo un largo viaje  pero en el camino ves que hay un gato sobre un arbol todavia tienes tiempo ya que como tal el jefe solo te esta experando asi que que decides? salvarlo o continuar?" << endl;
		cout << "(1 para ir otro numero para continuar)" << endl;
		cin >> conoir;
		if (conoir) {
			cout << "escalas para salvar al gato y al dejarlo en el suelo el gato te da un anillo el cual parece con diseño de hielo y que podria servirte para conjelar al jefe" << endl;
			items[0][0] = "anillo_de_hielo";
		}
		for (int i = 0; interaccionesa <= 2; i++) {
			cout << "al llegar a casa vas con tu familia asi que con quien quieres hablar primero? (esta tu hermano tu mama y tu gato para hablar con uno escrive (hermano) (mama) o (gato) sin los parentesis solo como esta escrito)" << endl;
			cin >> familiara;
			if (familiara == "gato") {
				cout << "ojala y te pongas mejor podras superarlo" << endl;

				interaccionesa = interaccionesa + 1;
			}
			if (familiara == "hermano") {
				cout << "tienes que despertar tu poder" << endl;

				interaccionesa = interaccionesa + 1;
			}
			if (familiara == "mama") {
				cout << "se que despues volveras con nosotros" << endl;

				interaccionesa = interaccionesa + 1;
			}
			if (familiara == "papa") {
				cout << "(tu animo de encontrar easter eggs te llevo aca asi que dire que el pastel es una mentira) o penze que no hablarias conmigo pero es agradable que lo hallas hecho gracias tu puedes" << endl;
			}
			if (familiara != "gato" && familiara != "mama" && familiara != "hermano" && familiara != "papa") {
				cout << "lo escriviste mal intenta de nuevo" << endl;
			}


		}
		cout << "ya que terminaste de hablar con todos decides continuar pero tu familia te detiene para darte algo parece brillante y es como un anillo te ayudara a iluminar la obscuridad de la sala del jefe con la claridad de la familia" << endl;
		items[1][0] = "fragmento_de_luz_familiar";
		cout << "genial con esto podre ver al jefe final" << endl;
	}
	cout << "vas en camino a la aldea pero te encuentras con un poco de pasto sospechoso quieres arrancarlo?(1 para si cualquier otra cosa para no " << endl;
	cin >> mechon;
	system("cls");
	if (mechon) {
		cout << "haz arrancado el mechon de pasto del suelo y encontraste una moneda de oro la cual es bastante valiosa lo suficiente para comprar un buen escudo de arco" << endl;
		dinero = 1;
	}
	cout << "al entrar a la aldea hay 2 cosas 1 grupo de gente y una tienda pero recuerdas que es probable de que no puedas visitar la tienda despues de hablar con la gente entonces quieres ir a la tienda primero?(1 para si otro para no)" << endl;
	cin >> tienda;
	system("cls");
	if (tienda) {
		cout << "te resive el señor de la tienda y te pregunta si quieres comprar un escudo de arco por una moneda de oro(1para si otro para no)" << endl;
		cin >> comprar;
		system("cls");
		if (comprar && dinero == 1) {
			cout << "bien aqui tienes tu escudo" << endl;
			items[0][1] = "escudo_de_arco";
		}
		if (comprar && dinero != 1) {
			cout << "no te alcanzo lo siento" << endl;
		}
		cout << "el señor de la tienda dice que tenga un buen dia y cierra la tienda" << endl;
		interaccionesa = 0;
	}		for (int i = 0; interaccionesa <= 2; i++) {
		cout << "te dirijes al grupon de gente y hay un hombre una mujer y un viejo amigo(para hablar con el hombre escrive (hombre) para la mujer escrive (mujer) y para hablar con tu viejo amigo escrive (amigo)" << endl;
		cin >> gente;

		if (gente == "hombre") {
			cout << "tienes que detenerlo" << endl;

			interaccionesa = interaccionesa + 1;
		}
		if (gente == "mujer") {
			cout << "vamos tu puedes" << endl;

			interaccionesa = interaccionesa + 1;
		}
		if (gente == "amigo") {
			cout << "despierta tu lado agresivo" << endl;

			interaccionesa = interaccionesa + 1;
		}
		if (gente != "hombre" && gente != "mujer" && gente != "amigo") {
			cout << "lo escriviste mal intenta de nuevo" << endl;
		}
	}
	cout << "los tres te dicen ya tienes que irte toma esto ellos te dan un arco de flechas infinitas" << endl;
	items[1][1] = "arco de flechas infinitas";
	cout << "vas en camino a tu destino pero poco a poco las cosas se ponen peor empiezas a escuchar despierta levantate vamos pero no hay nadie ni nada antes parecian ser los animales eran los que te hablaban pero no hay nadie estas solo " << endl;
	cout << "que pasa? por que todo se esta deshaciendo? despues de un rato despiertas en una sala de hozpital(presiona una tecla y enter para continuar" << endl;
	cin >> limpiapantallas;
	system("cls");
	interaccionesa = 0;
	for (int i = 0; interaccionesa <= 4; i++) {
		cout << "al abrir los ojos ves a mucha gente la cual esta feliz entre ellos una doctor (doctor) una enfermera (enfermera) tu padre (padre) tu madre (madre) y tu (hermana) con quien hablas primero" << endl;
		cin >> gente;

		if (gente == "doctor") {
			cout << "por fin despertaste lamentamos querer desconectarte por que creimos todos que ya no despertarias " << personaje << endl;

			interaccionesa = interaccionesa + 1;
		}
		if (gente == "enfermera") {
			cout << "nos preocupo mucho tu estado de salud y nos llego a hacer penzar que no despertarias que bien que si lo lograste " << personaje << endl;

			interaccionesa = interaccionesa + 1;
		}
		if (gente == "padre") {
			cout << "el te abraza y te dice que te te extraño ya queria que despertaras y que le hubiera dolido muchisimo que te hubieran desconectado " << personaje << endl;

			interaccionesa = interaccionesa + 1;
		}
		if (gente == "madre") {
			cout << "les dije a todos que ivas a despertar antes de que te desconectaramos menos mal que si lo hiciste te quiero hijo bienvenido de vuelta " << personaje << endl;

			interaccionesa = interaccionesa + 1;
		}
		if (gente == "hermana") {
			cout << "hermanito despertaste por fin gracias no podia estar feliz sin ti " << personaje << endl;

			interaccionesa = interaccionesa + 1;
		}

		if (gente != "doctor" && gente != "enfermera" && gente != "padre" && gente != "madre" && gente != "hermano") {
			cout << "lo escriviste mal intenta de nuevo" << endl;
		}
	}
	cout << "parece que te salvaste de la muerte eterna por poco pero todo lo que viviste en tu sueño se ha ido lo que tenias incluso en tu inventario no existio nada de la siguiente lista de cosas" << endl;
	cout << items[0][0] << ", " << items[1][0] << ", " << items[0][1] << ", " << items[1][1] << ", " << "pero bueno por fin puedes seguir tu vida y ser feliz con tu verdadera familia recuerda que ounque no seas un heroe real tu familia y amigos te aprecian y necesitan fin " << endl;
	return 0;



}