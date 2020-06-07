#include <iostream>
#include <queue>

using namespace std;

//öncelik sıralanmasını değiştirmek için
template <typename T>
bool comp(T x, T y)
{
	return x > y;
}

void main() {

	priority_queue<int,vector<int>,bool(*)(int,int)> pq(comp);
    pq.push(10);
    pq.push(21);
    pq.push(12);
    pq.push(5);
	
	while (!pq.empty()) //boş olup olmadığına bakar 
	{
        cout << pq.top() << " "; //en üsttekini gösterir
        pq.pop();	//en üsttekini siler
    }

}