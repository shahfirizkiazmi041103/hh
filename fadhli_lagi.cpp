#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

class GenerateRandomValues{
	public:
		double randomValues[10];
		int count=0;
		void generate(){
			//inisialisasi seed untuk generate bilangan acak
			srand(time(NULL));
			
			//generate bilangan acak antara 0 dan 1
			for(int i=0;i<10;i++){
				double randomValue=static_cast<double>(rand())/RAND_MAX;
				std::cout<<std::setprecision(2);
				std::cout<<randomValue<<'\n';
				
				//cek jika nilai lebih dari 0.75 masukkan ke dalam array
				if(randomValue>0.75){
					randomValues[count]=randomValue;
					count++;
				}
			}
			
			//tampilkan nilai bilangan yang ratenya lebih dari 0.75
			std::cout<<"\nBilangan yang ratenya lebih dari 0.75:\n";
			for(int i=0;i<count;i++){
				std::cout<<randomValues[i]<<'\n';
			}
			
			//mencari nilai minimun dan maksimun dari 0.75
			double min = randomValues[0];
			double max = randomValues[0];
			for(int i=1;i<count;i++){
				if(randomValues[i]<min){
					min=randomValues[i];
				}
				if(randomValues[i]>max){
					max=randomValues[i];
				}
			}
			//tampilkan nilai minimun dan maksimun
			std::cout<<"\nNilai minimun dari bilangan yang ratenya lebih dari 0.75: "<<min<<'\n';
			std::cout<<"\nNilai maksimun dari bilangan yang ratenya lebih dari 0.75: "<<max<<'\n';
		}
}firstMethod;
int main(){
	firstMethod.generate();
	return 0;
}
