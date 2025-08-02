//***************************************************************************************
// Cryptopals Challenges
// Set 01 Challenge 01
// Convert hex to base64
//***************************************************************************************
// Include
#include <stdio.h>
#include <filesystem>
#include <fstream>
#include "DBlas.h"
//---------------------------------------------------------------------------------------
// Namespace
using namespace std;
using namespace std::filesystem;
//***************************************************************************************
int main()
{
	// Scrive l'intestazione 
	printf("Set 01 - Challenge 01\n");
	printf("Convert hex to base64\n");
	printf("-----------------------------------------------------");
	printf("\nTesto iniziale:\n\t 49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d");

	//-----------------------------------------------------------------------------------
	// Converte il testo esadecimale in base64
	//-----------------------------------------------------------------------------------
	
	// Dichiara le variabili
	// Testo esadecimale da convertire
	char Text[] = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f"
		"69736f6e6f7573206d757368726f6f6d";

	// Lunghezza del testo esadecimale
	uint32_t Length = 96;

	// Crea un oggetto convertitore di formato
	blas::formatconverter::DFormatConverter Convert;

	// Converte il testo esadecimale in un array di byte
	pair<uint8_t*, uint32_t> Binary = Convert.text_to_binary(make_pair(Text, Length));

	// Converte l'array di byte in base64
	pair<char*, uint32_t> Base64 = Convert.binary_to_base64(Binary);

	// Stampa la soluzione
	printf("\nIl testo in base64 e':\n\t%s\n", Base64.first);

	//-----------------------------------------------------------------------------------
	
	// Attende l'input dell'utente
	system("pause");

	// Restituisce 0
	return 0;
}
