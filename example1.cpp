#include <iostream>
#include <queue>

using namespace std;

void main() {

	//boş birtane obje oluşturuldu
    priority_queue < int > pq; 
	
	// öncelik sıralandırmasına göre container dolduruluyor
    pq.push(10);
    pq.push(21);
    pq.push(12);
    pq.push(5);
   

    // büyüktür operatorune göre çalışma sonucunun çıktısı
    while (!pq.empty()) //boş olup olmadığına bakar 
	{
        cout << pq.top() << " "; //en üsttekini gösterir
        pq.pop();	//en üsttekini siler
    }
}