#include "Source.h"



using namespace std;
//using namespace sf;


int WindowH = 960;
int WindowW = 540;



int main(int argc, char** argv)
{
	sf::RenderWindow  window(sf::VideoMode(WindowH, WindowW), "FEngine");


	printf("printf\n");
	cout << "cout" << endl;
	while (window.isOpen())
	{

		while (window.pollEvent(event))

		{
			if (event.type == sf::Event::Closed)
			{


				window.close();
			}
		
		}

	}



	//system("PAUSE");

	return 0;
}