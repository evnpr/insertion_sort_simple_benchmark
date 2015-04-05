// cin with strings
#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <vector>
using namespace std;

void insertion_sort (int arr[], int length){

        int j, temp;


        time_t start = time(NULL);

	for (int i = 1; i < length; i++){
		j = i;
		while (j > 0 && arr[j] < arr[j-1]){
			  temp = arr[j];
			  arr[j] = arr[j-1];
			  arr[j-1] = temp;
			  j--;
                }
        }
        //for ( int i = 0; i < length; i++){
        //    cout << arr[i] << endl;
        //}

        time_t end = time(NULL);
        std::cout<<"Execution Time: "<< (double)(end-start)<<" Seconds"<<std::endl;

}


int main ()
{

    int array[50000];
    int ii = 0;
    int i; 
    char *inname = "example.txt"; 
    ifstream infile(inname); 
    if (!infile) { 
        cout << "There was a problem opening file " << inname << " for reading." << endl; 
        return 0; 
    } 
    while (infile >> i) { 
        array[ii] = i;
        ii++;
    }


  insertion_sort(array, 50000);
  return 0;
}
