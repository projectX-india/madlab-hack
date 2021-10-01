#include <bits/stdc++.h>
#define d(x) cout << #x << " " << x << "\n";
using namespace std;

//1. Karastuba multiplication
/*string add(string a, string b)
{
	string c, d;
	if (a.size() < b.size())
	{
		c = a;
		d = b;
	}
	else
	{
		c = b;
		d = a;
	}
	string k = "";
	while (abs(d.size() - c.size()) != k.size())
	{
		k = k + "0";
	}
	k = k + c;
	string r;
	int carry = 0;
	for (int i = d.size() - 1; i >= 0; --i)
	{
		int x = (d[i] - '0') + (k[i] - '0') + carry;
		r.push_back(x % 10 + '0');
		carry = x / 10;
	}
	if ( carry != 0)
	{
		r.push_back(carry + '0');
	}
	reverse(r.begin(), r.end());
	return r;
}
string sub(string a, string b)
{
	string c, d;
	if (a.size() < b.size())
	{
		c = a;
		d = b;
	}
	else
	{
		c = b;
		d = a;
	}
	string k = "";
	while (abs(d.size() - c.size()) != k.size())
	{
		k = k + "0";
	}
	k = k + c;
	string r;
	int carry = 0;
	for (int i = d.size() - 1; i >= 0; --i)
	{
		char x = d[i] - k[i] - carry;

		if (sub < 0)
		{
			x = x + 10;
			carry = 1;
		}
		else
		{carry = 0;}

		r.push_back(x + '0');
	}
	reverse(r.begin(), r.end());
	return r;
}
string  multiply(string x, string y)
{
	if (x.size() == 1)
	{
		stringstream s1;
		s1 << x;
		int f, g;
		s1 >> f;
		stringstream s2;
		s2 << y;
		s2 >> g;
		int l = f * g;
		stringstream s3;
		s3 << l;
		string c;
		s3 >> c;
		return c;
	}
	else
	{
		string a, b, c, d;
		int n = x.size();
		for (long long int i = 0; i < floor(n / 2); ++i)
		{
			a.push_back(x[i]);
			c.push_back(y[i]);
		}
		for (long long int i = ceil(n / 2); i < n; ++i)
		{
			b.push_back(x[i]);
			d.push_back(y[i]);
		}
		// x.y=10^n(a*c)+10^n/2(ad+bc)+bd
		string v = multiply(a, c);
		string k = multiply(b, d);
		string t = sub(multiply(add(a, b), add(c, d)), v);
		string m = sub(t, k);
		for (int i = 1; i <= n; ++i)
		{
			v = v + "0";
		}
		for (int i = 1; i <= n / 2; ++i)
		{
			m = m + "0";
		}
		string a3 = add(v, k);
		return add(a3, m);
	}
}



int main()
{
	string x;
	cin >> x;
	string y;
	cin >> y;

	cout << multiply(x, y);
}*/

//2. Selection sort,bubble sort,insertion sort o(n^2)

//void selectionsort(int a[]) //O(N^2)
//{
//for(int i=0;i<10;i++)
//{
//    for(int j=i+1;j<10;j++)
//    {if(a[i]>a[j])
//    {
//        int t=a[i];
//        a[i]=a[j];
//        a[j]=t;
//    }
//    }
//}
//    for(int i=0;i<10;i++)
//{
//    printf("%d ",a[i]);
//}
//
//}
//void bubblesort(int b[])
//{for(int j=0;j<10;j++)
//{
//for(int i=0;i<10;i++)
//{
//    if(b[i]>b[i+1])
//    {
//        int t=b[i];
//        b[i]=b[i+1];
//        b[i+1]=t;
//
//    }
//}
//}
//for(int i=0;i<10;i++)
//{
//    printf("%d ",b[i]);
//}
//
//}
//void insertionsort(int a[])
//{
//    for(int i=1;i<10;i++)
//    {
//         int k=i;
//        for(int j=i-1;j>=0;j--)
//        {
//
//            if(a[j]>a[k])
//            {
//                int t=a[j];
//                a[j]=a[k];
//                a[k]=t;
//
//            }
//            k--;
//
//        }

//    }
//    for(int i=0;i<10;i++)
//{
//    printf("%d ",a[i]);
//}
//
//}
//int main()
//{
//int a[10];
//for(int i=0;i<10;i++)
//{
//    scanf("%d",&a[i]);
//}
//selectionsort(a);
//
//
//return 0;
//}

//3. divide and conquer - merge sort      // 6n+6nlogn - operations
// vector<int> mergesort(vector<int> a)
// {
// 	if (a.size() == 1)
// 	{
// 		return a;
// 	}
// 	else
// 	{
// 		int b = a.size() / 2;
// 		vector<int> a1;
// 		vector<int> a2;
// 		for (int i = 0; i < b; ++i)
// 		{
// 			a1.push_back(a[i]);
// 		}
// 		for (int i = b; i < a.size(); ++i)
// 		{
// 			a2.push_back(a[i]);
// 		}
// 		vector<int> a3 = mergesort(a1);
// 		vector<int> a4 = mergesort(a2);
// 		vector<int> z;
// 		int k = 0, j = 0;
// 		merge subroutine
// 		for (int i = 0; i < a.size(); ++i)
// 		{
// 			if (a3[k] > a4[j] && k < a3.size() && j < a4.size())
// 			{
// 				z.push_back(a4[j]);
// 				++j;
// 			}
// 			else if (a3[k] <= a4[j] && j < a4.size() && k < a3.size())
// 			{
// 				z.push_back(a3[k]);
// 				++k;
// 			}
// 			else if (j < a4.size())
// 			{
// 				z.push_back(a4[j]);
// 				++j;
// 			}
// 			else
// 			{
// 				z.push_back(a3[k]);
// 				++k;
// 			}
// 		}
// 		return z;
// 	}
// }

// int main()
// {
// 	vector<int> a = {93, 21, 12, 0, 1, 33, -12};
// 	vector<int> b = mergesort(a);
// 	for (int i = 0; i < b.size(); ++i)
// 	{
// 		cout << b[i] << " ";
// 	}
// }


//4. algorithim for counting inversions
//
//long long int inversions(vector< int> &v)
//{
//    if(v.size()==1)
//    {
//        return 0;
//    }
//    else
//    {
//        vector< int>h1;
//        vector< int>h2;
//        int n=v.size();
//        for(int i=0; i<n/2; ++i)
//        {
//            h1.push_back(v[i]);
//        }
//        for(int i=n/2; i<n; ++i)
//        {
//            h2.push_back(v[i]);
//        }
//        long long int a=inversions(h1);
//        long long int b=inversions(h2);
//        long int c=0; // number of split inversions i.e inversions between 1 half to 2 another
//        int z=0;  // index of h2 -left
//        int x=0; // index of h1 -right
//        for( int i=0; i<v.size(); ++i)
//        {
//            if(h1[x]<h2[z] && x!=h1.size() && z!=h2.size())
//            {
//                v[i]=h1[x];
//                ++x;
//            }
//            else if(h1[x]>h2[z] && x!=h1.size() && z!=h2.size()) //inversion
//            {
//                v[i]=h2[z];
//                ++z;
//                c=c+h1.size()-x;
//            }
//            else if(x!=h1.size())
//            {
//                v[i]=h1[x];
//                ++x;
//            }
//            else
//            {
//                v[i]=h2[z];
//                ++z;
//            }
//        }
//        return a+b+c;
//    }
//}
//int main()
//{
//    vector<int>v;
//    ifstream file1;
//    file1.open("array.txt");
//    if(!file1)
//    {
//        cout<<"Error"<<endl;
//    }
//    else
//    {
//        string line;
//        int x;
//        int i=0;
//        stringstream s1;
//        while(!file1.eof())     // checks if there is a flag
//        {
//            getline(file1,line);
//            s1<<line;
//            s1>>x;
//            s1.clear();
//            v.push_back(x);
//            ++i;
//        }
//
//        cout<<endl<<inversions(v);
//        file1.close();
//    }
//
//}

//5. algo for closest pair of points
//class point
//{
//public:
//float x;
//float y;
//};
//bool comp(point i,point j)
//{
//    return (i.x<j.x);
//}
//bool comp1(point i,point j)
//{
//    return (i.y<j.y);
//}
//int min(int d1,int d2)
//{
//    return (d1>d2)?d2:d1;
//}
//float dist(point p1, point p2)
//{
//    return sqrt( (p1.x - p2.x)*(p1.x - p2.x) +
//                 (p1.y - p2.y)*(p1.y - p2.y)
//               );
//}
//
//float closestpair(vector<point>p)
//{
//if(p.size()==3 || p.size()==2)
//{
//float d=dist(p[0],p[1]);
//for(int i=1;i<p.size();++i)
//{
//for(int j=i+1;j<p.size();++j)
//{
//if(dist(p[i],p[j])<d)
//{
//    d=dist(p[i],p[j]) ;
//}
//}
//}
//return d;
//}
//else
//{
//int n=p.size();
//vector<point>px=p;
//vector<point>py=p;
//sort(px.begin(),px.end(),comp);
//sort(py.begin(),py.end(),comp1);
//vector<point>q;
//vector<point>r;
//for(int i=0;i<n/2;++i)
//{
//    q.push_back(px[i]);
//}
//for(int i=n/2;i<n;++i)
//{
//    r.push_back(px[i]);
//}
//float d1=closestpair(q);
//float d2=closestpair(r);
//float d=min(d1,d2);
//vector<point>s;
//int x0=q[(n/2)-1].x;
//for(int i=0;i<py.size();++i)
//{
//    if(py[i].x>=x0-d && py[i].x<=x0+d)
//    {
//        s.push_back(py[i]);
//    }
//}
//for(int i=0;i<s.size();++i)
//{
//    for(int j=1;j<=min(s.size()-i,7);++j)
//    {
//        point p3=s[i];
//        point p4=s[i+j];
//        if(dist(p3,p4)<d)
//        {
//            d=dist(p3,p4);
//        }
//    }
//}
//return d;
//}
//}
//
//
//int main()
//{int n;
//cin>>n;
//vector<point>v;
//for(int i=0;i<n;++i)
//{
//point p;
//cin>>p.x;
//cin>>p.y;
//v.push_back(p);
//}
//cout<<closestpair(v);
//}

//6. Binary search  o(log n)
// int binarySearch(vector<int> arr, int l, int r, int x)
// {
// 	if (r >= l)
// 	{
// 		int mid = l + ((r - l) / 2);
// 		// If the element is present at the middle
// 		// itself
// 		if (arr[mid] == x)
// 			return mid;

// 		// If element is smaller than mid, then
// 		// it can only be present in left subarray
// 		else if (arr[mid] > x)
// 			return binarySearch(arr, l, mid - 1, x);

// 		// Else the element can only be present
// 		// in right subarray
// 		else
// 		{
// 			return binarySearch(arr, mid + 1, r, x);
// 		}
// 	}

// 	// We reach here when element is not
// 	// present in array
// 	return -1;
// }

// int main()
// {
// 	vector<int> a = {0, 1, 2, 9, 22, 111};
// 	int l = 0;
// 	int r = a.size();
// 	cout << binarySearch(a, l, r, 9);
// }

//

//You are a given a unimodal array of n distinct elements,
//meaning that its entries are in increasing order up until its
//maximum element, after which its elements are in decreasing order.
//Give an algorithm to compute the maximum element that runs in O(log n) time.

// int binarys(vector<int>v,int l,int r)
// {
//    int m=l+(r-l)/2;
//    if(v[m]>v[m-1] && v[m]>v[m+1])
//    {
//        return m;
//    }
//    else if(v[m]>v[m-1] && v[m]<v[m+1])
//    {
//        binarys(v,m+1,r);
//    }
//    else
//    {
//        binarys(v,l,m-2);
//    }
// }

//int main()
//{
//vector<int>v={1,7,8,9,11,6,3,2,1};
//cout<<binarys(v,0,v.size());
//}
//
//

//You are given a sorted (from smallest to largest) array A of n distinct integers
//which can be positive, negative, or zero. You want to decide whether or not there
//is an index i such that A[i] = i. Design the fastest algorithm that you can for
//solving this problem.

//int binaryai(vector<int>v,int l,int r)
//{
//    if(l<=r)
//    {
//    int m=l + ((r-l)/2);
//    if(v[m]==m)
//    {
//        return m;
//    }
//    else if(v[m]<m)
//    {
//        l=m;
//        return binaryai(v,l,r);
//    }
//    else
//    {
//        r=m;
//        return binaryai(v,l,r);
//    }
//
//    }
//    return -1;
//}
//
//int main()
//{
//vector<int>v={-1,0,3,5};
//cout<<binaryai(v,0,v.size());
//}

//quick sort
//

// void swap(int *a, int *b)
// {
// 	int temp = *a;
// 	*a = *b;
// 	*b = temp;
// }

// void quicksort(vector<int> &a, int l, int r)
// {
// 	// r is ) l is inclusive
// 	if (r > l)
// 	{
// 		srand(time(0));
// 		int z = l + rand() % (r - l); // from 0 to n-1
// 		swap(a[l], a[z]);
// 		int i = l + 1;
// 		int j = l + 1;
// 		for (i; i < r; ++i)
// 		{
// 			if (a[i] < a[l])
// 			{
// 				swap(&a[j], &a[i]);
// 				++j;
// 			}
// 		}
// 		swap(&a[j - 1], &a[l]);
// 		// i points to r j points to first element of 2nd partioned ar
// 		quicksort(a, l, j - 1);
// 		quicksort(a, j, r);
// 	}
// 	else
// 	{
// 		return;
// 	}
// }

// int main()
// {
// 	vector<int> v = {0, 5, 7, 1, 2, 3, 4, -221, 123, 999, 84}; // this is a randomized algo with random rn time
// 	quicksort(v, 0, v.size());
// 	for (int i = 0; i < v.size(); ++i)
// 	{
// 		cout << v[i] << " ";
// 	}
// }

//  selection algos

// int rselect(vector<int> v, int l, int r, int i)
// {
// 	if (r - l == 1)
// 	{
// 		return v[l];
// 	}
// 	srand(time(0));
// 	int p = rand() % (r - l); //pivot pos
// 	swap(v[l], v[p]);
// 	int k = l + 1;
// 	int j = l + 1;
// 	for (k; k < r; ++k)
// 	{
// 		if (v[k] < v[l])
// 		{
// 			swap(v[j], v[k]);
// 			++j;
// 		}
// 	}

// 	swap(v[j - 1], v[l]);
// 	// j-1 is pivot pos
// 	if (i == j - 1)
// 	{
// 		return v[i];
// 	}
// 	else if (i < j - 1)
// 	{
// 		return rselect(v, l, j - 1, i);
// 	}
// 	else if (i > j - 1)
// 	{
// 		return rselect(v, j, r, i);
// 	}
// 	return -1;
// }
// int pivot(vector<int> v, int l, int r, int i)
// {
// 	if (r - l < 5)
// 	{
// 		return v[(r + l) / 2];
// 	}
// 	else
// 	{
// 		vector<int> c;
// 		int k;
// 		for (k = 0; k < (r - l) / 5; ++k)
// 		{
// 			sort(v.begin() + 5 * k + l, v.begin() + 5 + 5 * k + l);
// 			c.push_back(v[2 + 5 * k + l]);
// 		}
// 		if ((r - l) % 5 != 0)
// 		{
// 			sort(v.begin() + 5 * k + l, v.end());
// 			c.push_back(v[5 * k + l + (distance(v.begin() + 5 * k + l, v.end()) / 2) - 1]);
// 		}

// 		return pivot(c, 0, (r - l) / 5, (r - l) / 10);
// 	}
// }
// int Dselect(vector<int> v, int l, int r, int i)
// {
// 	if (r - l == 1)
// 	{
// 		return v[l];
// 	}
// 	int p = pivot(v, l, r, i);
// 	int pi;
// 	for (pi = l; pi < r; ++pi)
// 	{
// 		if (v[pi] == p)
// 		{
// 			break;
// 		}
// 	}

// 	swap(v[l], v[pi]);
// 	int k = l + 1;
// 	int j = l + 1;
// 	for (k; k < r; ++k)
// 	{

// 		if (v[k] < v[l])
// 		{
// 			swap(v[j], v[k]);
// 			++j;
// 		}
// 	}

// 	swap(v[j - 1], v[l]);

// 	if (i == j - 1)
// 	{
// 		return v[i];
// 	}
// 	else if (i < j - 1)
// 	{
// 		return Dselect(v, l, j - 1, i);
// 	}
// 	else if (i > j - 1)
// 	{
// 		return Dselect(v, j, r, i);
// 	}
// }

// int main()
// {
// 	vector<int> v = {56, 7, 8, 9, 11, 12, 1, 22, 2, 232, 423, 5, 16, 43}; // 1 2 5 7 8 9 11 12  16 22  43 56 232 423
// 	cout << rselect(v, 0, v.size(), 4) << endl;							  // 0 based indexing
// }

// counting sort -o(n) range based sort

// vector<int> countingSort(vector<int> arr)
// {
// 	vector<int> c;
// 	vector<int> k;
// 	c.assign(100, 0);
// 	for (int i = 0; i < arr.size(); ++i)
// 	{
// 		++c[arr[i]];
// 	}
// 	for (int i = 1; i < c.size(); ++i)
// 	{
// 		c[i] = c[i - 1] + c[i];
// 	}
// 	k.resize(arr.size() + 1);
// 	for (int i = 0; i < arr.size(); ++i)
// 	{
// 		--c[arr[i]];
// 		k[c[arr[i]]] = arr[i];
// 	}
// 	return k;
// }

// int main()
// {
// 	vector<int> a = {19, 10, 12, 10, 24, 25, 22};
// 	vector<int> c = countingSort(a);
// 	for (int i = 0; i < a.size(); ++i)
// 	{
// 		cout << c[i] << " ";
// 	}
// }

// Linked lists
//
// class node
// {
// public:
// 	int data;
// 	node *next;
// };
// node *reverse(node *head)
// {
// 	// Initialize current, previous and
// 	// 						next pointers
// 	node *current = head;
// 	node *prev = NULL, *next = NULL;

// 	while (current != NULL)
// 	{
// 		// Store next
// 		next = current->next;

// 		// Reverse current node's pointer
// 		current->next = prev;

// 		// Move pointers one position ahead.
// 		prev = current;
// 		current = next;
// 	}
// 	head = prev;
// 	return head;
// }
// node *del(node *head, int data)
// {
// 	if (head->data == data)
// 	{
// 		head = NULL;
// 		return head;
// 	}
// 	node *temp = head;
// 	while ((head->next)->data != data)
// 	{
// 		head = head->next;
// 	}
// 	head->next = (head->next)->next;
// 	delete head->next;
// 	return temp;
// }
// node *insertNodeAtTail(node *head, int data)
// {
// 	node *temp = head;
// 	if (head == NULL)
// 	{
// 		node *temp2 = new node();
// 		temp2->data = data;
// 		temp2->next = NULL;
// 		head = temp2;
// 		return head;
// 	}
// 	while ((temp->next) != NULL)
// 	{
// 		temp = temp->next;
// 	}
// 	node *t = new node();
// 	t->next = NULL;
// 	t->data = data;
// 	temp->next = t;
// 	return head;
// }
// print(node *head)
// {
// 	while (head != NULL)
// 	{
// 		cout << head->data << " ";
// 		head = head->next;
// 	}
// }

// int main()
// {
// 	node *head = NULL;
// 	head = insertNodeAtTail(head, 2);
// 	head = insertNodeAtTail(head, 12);
// 	head = insertNodeAtTail(head, 10);
// 	head = del(head, 12);
// 	print(head);
// 	head = reverse(head);
// 	cout << endl;
// 	print(head);
// }
//
// stacks-implement using vectors
//front() pop_back() push_back()
//
//queue
//
//#include<queue>
//using namespace std;
//void print(queue<int>q)
//{
//    while(!q.empty())
//    {
//        cout<<q.front()<<" ";
//        q.pop();
//    }
//    cout<<endl;
//}
//int main()
//{
//queue<int>q;
//q.push(2);
//q.push(5);
//q.push(4);
//print(q);
//q.push(100);
//cout<<endl<<q.back();
//cout<<endl<<q.front();
//}

/*
Graph - adjacency list
*/
// struct edge
// {
//    int src;
//    int dest;
//    int weight;
// };
// class graph
// {
// public:
//    vector<vector<pair<int,int>>>v;
//    graph(vector<edge> e,int n)
//    {
//        v.resize(n);
//        for(auto i:e)
//        {
//            v[i.src].push_back(make_pair(i.dest,i.weight));
//            v[i.dest].push_back(make_pair(i.src,i.weight));
//        }
//    }
//    void printgraph()
//    {
//        for(int i=0;i<v.size();++i)
//        {
//            cout<<i<<"->";
//            for(int j=0;j<v[i].size();++j)
//            {
//                cout<<v[i][j].first<<" weight="<<v[i][j].second<<" , ";
//            }
//            cout<<endl;
//        }
//    }
// };
// int main()
// {
//    vector<edge>e={{0,1,6},{0,2,10},{1,2,3},{2,3,1}};//undirected
//    graph g(e,4);
//    g.printgraph();
// }

// BFS, DFS,SHORTEST PATH, NO OF UNDIRECTED COMPONENTS

// struct edge
// {
//    int src;
//    int dest;
// };
// class graph
// {
// public:
//    vector<vector<int>>v;
//    vector<bool>exp;
//    graph(vector<edge> e,int n)
//    {
//        v.resize(n);
//        exp.resize(n);
//        for(auto i:e)
//        {
//            v[i.src].push_back(i.dest);
//            v[i.dest].push_back(i.src);
//        }
//    }

// void BFS(int s)
// {
// 	exp[s] = 1;
// 	queue<int> q;
// 	dist[s]=0;
// 	q.push(s);
// 	int u;
// 	while (!q.empty())
// 	{
// 		u = q.front();
// 		q.pop();
// 		for (int i = 0; i < v[u].size(); ++i)
// 		{
// 			if (exp[v[u][i]] == 0)
// 			{
// 				exp[v[u][i]] = 1;
// 				q.push(v[u][i]);
// 				dist[v[u][i]]=dist[u]+1;
// 			}
// 		}
// 	}
// }
//    int shortestpath(int s,int x,int n)
//    {
//        vector<int>dist(n) ;
//        set0(n);
//         exp[s]=1;
//        queue<int>q;
//        q.push(s);
//        int u;
//        dist[s]=0;
//        while(!q.empty())
//        {
//            u=q.front();
//            q.pop();
//            for(int i=0;i<v[u].size();++i)
//            {
//                if(exp[v[u][i]]==0)
//                {
//                    exp[v[u][i]]=1;
//                    dist[v[u][i]]=dist[u]+1;
//                    q.push(v[u][i]);
//                }
//            }

//        }
//        return dist[x];
//    }
//    int noofundirectedcomponents(int n)
//    {
//        int c=0;
//        set0(n);
//        for(int i=0;i<n;++i)
//        {
//            if(exp[i]==0)
//            {
//                BFS(i);
//                ++c;
//            }
//        }
//        return c;
//    }
// void set0(int n)
// {
//    for(int i=0;i<n;++i)
//        {
//            exp[i]=0;
//        }
// }
// void DFS(int s)
// {
//    exp[s]=1;
//    for(int i=0;i<adj[s].size();++i)
//    {
//        if(exp[adj[s][i]]==0)
//        {
//            DFS(adj[s][i]);
//        }
//    }
// }
// void DFS_stack(int s,int n)
// {
//    set0(n);
//    vector<int>st;
//    st.push_back(s);
//    exp[s]=1;
//    int u;
//    while(!st.empty())
//    {
//        u=st.back();
//        cout<<u<<" ";
//        st.pop_back();
//       for(int i=0;i<v[u].size();++i)
//       {
//        if(exp[v[u][i]]==0)
//        {
//            st.push_back(v[u][i]);
//            exp[v[u][i]]=1;
//        }
//       }
//    }
// }

// };
// int main()
// {
//    vector<edge>e={{0,1},{0,2},{0,3},{1,4},{3,4},{4,5}};//undirected
//    graph g(e,10);
//    g.DFS(0);
//    cout<<endl;
//    g.DFS_stack(0,10);

// }

// topological sorting

//struct edge
//{
//    int src;
//    int dest;
//};
//class graph
//{
//public:
//    vector<vector<int>>v;
//    vector<bool>exp;
//    vector<int>tsort;
//    graph(vector<edge> e,int n)
//    {
//        v.resize(n);
//        exp.resize(n);
//        for(auto i:e)
//        {
//            v[i.src].push_back(i.dest);
//        }
//    }
//    void BFS(int s)
//    {
//        exp[s]=1;
//        for(int i=0;i<v[s].size();++i)
//        {
//            if(exp[v[s][i]]==0)
//            {
//                BFS(v[s][i]);
//            }
//        }
//        tsort.push_back(s);
//    }
//   void topoplogicalsort(int n)
//    {
//      for(int i=0;i<n;++i)
//      {
//          if(exp[i]==0)
//          {
//              BFS(i);
//          }
//      }
//      cout<<"topological ordering:";
//      for(int i=n-1;i>=0;--i)
//      {
//          cout<<tsort[i]<<" ";
//      }
//    }
//
//};
//
//int main()
//{
//    vector<edge>e={{5,0},{4,0},{4,1},{5,2},{2,3},{3,1},{6,5}};//directed
//    graph g(e,7);
//    g.topoplogicalsort(7);
//
//}
//

// SSC kosavaju's two pass algo
//
//struct edge
//{
//    int src;
//    int dest;
//};
//class graph
//{
//public:
//    vector<vector<int>>v;
//    vector<bool>exp;
//    int t=1;
//    vector<int>label;
//    graph(vector<edge> e,int n)
//    {
//        v.resize(n);
//        exp.resize(n);
//        for(auto i:e)
//        {
//            v[i.src].push_back(i.dest);
//        }
//    }
//    void set0()
//    {
//        for(int i=0;i<exp.size();++i)
//        {
//            exp[i]=0;
//        }
//    }
//    void DFS2(int s)
//   {
//       exp[s]=1;
//       for(int i=0;i<v[s].size();++i)
//       {
//           if(exp[v[s][i]]==0)
//           {
//               DFS2(v[s][i]);
//           }
//       }
//   }
//   void DFS(int s)
//   {
//       exp[s]=1;
//       for(int i=0;i<v[s].size();++i)
//       {
//           if(exp[v[s][i]]==0)
//           {
//               DFS(v[s][i]);
//           }
//       }
//       label[s]=t;
//       ++t;
//   }
//   vector<int> retlabel(int n)
//    {
//        set0();
//        label.resize(n);
//        DFS_loop(n);
//        return label;
//    }
//       void DFS_loop(int n)
//    {
//        set0();
//        for(int i=n-1;i>0;--i)
//        {
//            if(exp[i]==0)
//            {
//            DFS(i);
//            }
//        }
//    }
//    int DFS_loopSSC(int n)
//    {
//        set0();
//        int c=0;
//        map<int,int>i;
//        for(int j=1;j<n;++j)
//        {
//           i[label[j]]=j;// STORES node value with key as label
//        }
//        for(int j=n-1;j>0;--j)
//        {
//            if(exp[i[j]]==0) // initial label val n-1 i.e highest to lowest
//            {
//            DFS2(i[j]);
//            ++c;
//            }
//        }
//        return c;
//    }
//};
//
//
//void reveresedges(vector<edge>&e)
//{
//    int t;
//    for(int i=0;i<e.size();++i)
//    {
//        t=e[i].src;
//        e[i].src=e[i].dest;
//        e[i].dest=t;
//    }
//}
//
//
//int main()
//{
//    vector<edge>e={{7,1},{1,4},{4,7},{9,7},{9,3},{6,9},{3,6},{8,6},{2,8},{5,2},{8,5}};//directed
//    reveresedges(e);
//    graph grev(e,10);
//    vector<int>nodes=grev.retlabel(10);
//    reveresedges(e);
//    graph g(e,10);
//    g.label=nodes;
//    cout<<g.DFS_loopSSC(10);
//
//}

//Djikstras SPA o(nm) implementation

// struct edge
// {
//    int src;
//    int dest;
//    int weight;
// };
// class graph
// {
// public:
// vector<vector<int>>adjlist;
// vector<vector<int>>edgeweight;
// vector<bool>exp;
// int n=4;
// graph(vector<edge>e)
// {
//    adjlist.resize(n);
//    edgeweight.resize(n);
//    exp.resize(n);
//   for(auto i:e)
//   {
//       adjlist[i.src].push_back(i.dest);
//       edgeweight[i.src].push_back(i.weight);
//   }
// }
// vector<int>djisktaSPA (int s,vector<edge>e)
// {
// vector<int>x;
// x.push_back(s); // store explored vertices
// exp[s]=1;
// vector<int>a;
// a.resize(n);
// int min;
// while(x.size()<n)
// {
// min=INT_MAX;
// int vo,wo;
// for(auto i:e)
// {
//    if(exp[i.src]==1 && exp[i.dest]==0 && a[i.src]+i.weight<min)
//    {
//        vo=i.src;
//        wo=i.dest;
//        min=a[i.src]+i.weight;
//    }
// }
// x.push_back(wo);
// a[wo]=min;
// exp[wo]=1;
// }
// return a;
// }
// };

// int main()
// {
// vector<edge>e={{0,1,1},{0,2,4},{1,2,2},{1,3,6},{2,3,3}};
// graph g(e);
// vector<int>sp=g.djisktaSPA(0,e);
// cout<<sp[2];
// }

// int main()
// {
// vector<edge>e={{0,1,1},{0,2,4},{1,2,2},{1,3,6},{2,3,3}};
// graph g(e);
// vector<int>sp=g.djisktaSPA(0);
// cout<<sp[2];
// }

// HEAP
//
// class heap
// {
// public:
// 	vector<int> h;
// 	heap(vector<int> v)
// 	{
// 		for (int i = 0; i < v.size(); ++i)
// 		{
// 			h.push_back(v[i]);
// 		}
// 	}
// 	// parent(i)=floor(i-1/2) child(i)=2i+1,2i+2
// 	void swap(int &x, int &y)
// 	{
// 		int t = x;
// 		x = y;
// 		y = t;
// 	}
// 	void insert(int x)
// 	{
// 		h.push_back(x);
// 		int j = h.size() - 1;
// 		for (int i = floor((j - 1) / 2); j != 0; i = floor((j - 1) / 2))
// 		{
// 			if (h[i] > h[j])
// 			{
// 				swap(h[i], h[j]);
// 				j = i;
// 			}
// 			else
// 			{
// 				break;
// 			}
// 		}
// 	}
// 	void extract_min()
// 	{
// 		cout << h[0] << endl;
// 		swap(h[0], h[h.size() - 1]);
// 		h.pop_back();
// 		int j = 0;
// 		for (int i = 1; 2 * j + 2 < h.size(); i = 2 * j + 1)
// 		{
// 			if (h[i] < h[j] && h[i] < h[i + 1])
// 			{
// 				swap(h[i], h[j]);
// 				j = i;
// 			}
// 			else if (h[i + 1] < h[j] && h[i + 1] < h[i])
// 			{
// 				swap(h[i + 1], h[j]);
// 				j = i;
// 			}
// 			else
// 			{
// 				break;
// 			}
// 		}
// 	}
// 	void printheap()
// 	{
// 		for (int i = 0; i < h.size(); ++i)
// 		{
// 			cout << h[i] << " ";
// 		}

// 		cout << endl;
// 	}
// 	void heapify()
// 	{
// 		for (int i = h.size() / 2 - 1; i >= 0; --i)
// 		{
// 			check(i);
// 		}
// 	}
// 	void check(int i)
// 	{
// 		int l, r;
// 		l = 2 * i + 1;
// 		r = 2 * i + 2;
// 		if (r < h.size() && h[r] < h[l] && h[r] < h[i])
// 		{
// 			swap(h[i], h[r]);
// 			check(r);
// 		}
// 		else if (l < h.size() && (r >= h.size() || h[l] < h[r]) && h[l] < h[i])
// 		{
// 			swap(h[i], h[l]);
// 			check(l);
// 		}
// 	}
// };
// int main()
// {
// 	vector<int> h = {100, 9, 5, 7, 1, 22};
// 	heap h0(h);
// 	h0.heapify();
// 	h0.printheap();
// 	h0.extract_min();
// 	h0.printheap();
// 	h0.extract_min();
// 	h0.printheap();
// 	h0.extract_min();
// 	h0.printheap();
// 	h0.insert(10);
// 	h0.printheap();
// }

// heaps using priority queue

//void showq(priority_queue<int>q)
//{
//    while(q.empty()==0)
//    {
//        cout<<q.top()<<" ";
//        q.pop();
//    }
//    cout<<endl;
//}
//void showq(priority_queue<int,vector<int>,greater<int>>q)
//{
//    while(q.empty()==0)
//    {
//        cout<<q.top()<<" ";
//        q.pop();
//    }
//    cout<<endl;
//}
//void heapsort(priority_queue<int,vector<int>,greater<int>>q)
//{
//    showq(q); // extract_min n times
//}
//int main()
//{
//    priority_queue<int>q; // max heap
//    q.push(5);
//    q.push(19);
//    q.push(10);
//    q.push(0);
//    showq(q);
//    q.pop();
//    showq(q);
//    // min heap
//    priority_queue<int,vector<int>,greater<int>>h;
//    h.push(3);
//    h.push(-1);
//    h.push(190);
//    h.push(2);
//    showq(h);
//    h.pop();
//    heapsort(h);

// median maintanence
//    int main()
//    {
//        priority_queue<int>low; //extract max
//    priority_queue<int,vector<int>,greater<int>>high; //extract min
//    int x;
//    cin>>x;
//    low.push(x);
//    for(int i=2;i<=6;++i)
//    {
//         cout<<"median["<<i-1<<"] = ";
//        if(low.size()==high.size())
//        {
//            float y=((low.top()+high.top())/2);
//            cout<<y;
//        }
//        else
//        {
//            if(low.size()>high.size())
//            {
//                cout<<low.top();
//            }
//            else
//            {
//                cout<<high.top();
//            }
//        }
//        cout<<" ";
//
//        cin>>x;
//        if(x>=low.top() && low.size()>=high.size())
//        {
//            high.push(x);
//        }
//        else if(x>=low.top() && low.size()>=high.size())
//        {
//            low.push(high.top());
//            high.pop();
//            high.push(x);
//        }
//        else if(x<=low.top() && (low.size() <= high.size()))
//        {
//            low.push(x);
//        }
//        else if(x<=low.top() && low.size()>=high.size())
//        {
//            high.push(low.top());
//            low.pop();
//            low.push(x);
//        }
//
//    }
//}

// djisktra SPA using heap
// o(mlgn)
// typedef pair<int,int> p;
// struct edge
// {
//    int src;
//    int dest;
//    int weight;
// };
// class graph
// {
// public:
// vector<vector<int>>adjlist;
// vector<vector<int>>edgeweight;
// vector<bool>exp;
// int n=4;
// graph(vector<edge>e)
// {
//    adjlist.resize(n);
//    edgeweight.resize(n);
//    exp.resize(n);
//   for(auto i:e)
//   {
//       adjlist[i.src].push_back(i.dest);
//       edgeweight[i.src].push_back(i.weight);
//   }
// }
// vector<int>djisktaSPA (int s)
// {
// vector<int>x;
// vector<int>a(n);
// x.push_back(s); // store explored vertices
// priority_queue<p,vector<p>,greater<p>>notx; // stores pair with key as shortest path distance and second=node
// exp[s]=1;
// while(x.size()!=n)
// {
// for(int i=0;i<adjlist[x.back()].size();++i)
// {
// notx.push(make_pair(a[x.back()]+edgeweight[x.back()][i],adjlist[x.back()][i]));
// }
// if(exp[notx.top().second]==0)
// {
// x.push_back(notx.top().second);
// a[x.back()]=notx.top().first;
// exp[x.back()]=1;
// }
// notx.pop();
// }
// return a;
// }
// };

// better implementation
// vector<int> dist;
// void djiskta()
// {
// 	priority_queue<p, vector<p>, greater<p>> pq;
// 	dist.assign(n + 1, INT_MAX);
// 	dist[1] = 0;
// 	pq.push(make_pair(0, 1));
// 	int u,l,v;
// 	while (!pq.empty())
// 	{
// 		u = pq.top().second;
// 		l = pq.top().first;
// 		pq.pop();
// 		if (dist[u] != l)
// 		{
// 			continue;
// 		}
// 		for (size_t i = 0; i < adj[u].size(); i++)
// 		{
// 			v = adj[u][i];
// 			l = wt[u][i];
// 			if (dist[u] + l < dist[v])
// 			{
// 				dist[v] = dist[u] + l;
// 				pq.push(make_pair(dist[v], v));
// 			}
// 		}
// 	}
// }

// int main()
// {
// vector<edge>e={{0,1,1},{0,2,4},{1,2,2},{1,3,6},{2,3,3}};
// graph g(e);
// vector<int>sp=g.djisktaSPA(0);
// cout<<sp[3];
// }

//BST

// struct node
// {
// 	int data;
// 	node *left;
// 	node *right;
// };
// node *getnewnode(int y)
// {
// 	node *n = new node();
// 	n->left = NULL;
// 	n->right = NULL;
// 	n->data = y;
// 	return n;
// }
// node *insert(int x, node *root)
// {
// 	if (root == NULL)
// 	{
// 		root = getnewnode(x);
// 	}
// 	else if (x > root->data)
// 	{
// 		root->right = insert(x, root->right);
// 	}
// 	else
// 	{
// 		root->left = insert(x, root->left);
// 	}
// 	return root;
// }
// bool search(int x, node *root)
// {
// 	if (root == NULL)
// 	{
// 		return false;
// 	}
// 	else if (root->data == x)
// 	{
// 		return true;
// 	}
// 	else if (root->data > x)
// 	{
// 		return search(x, root->left);
// 	}
// 	else
// 	{
// 		return search(x, root->right);
// 	}
// }
// node *nodeadress(int x, node *root)
// {
// 	if (root == NULL)
// 	{
// 		return root;
// 	}
// 	else if (root->data == x)
// 	{
// 		return root;
// 	}
// 	else if (root->data > x)
// 	{
// 		return nodeadress(x, root->left);
// 	}
// 	else
// 	{
// 		return nodeadress(x, root->right);
// 	}
// }
// int findmin(node *root)
// {
// 	if (root->left == NULL)
// 	{
// 		return root->data;
// 	}
// 	return findmin(root->left);
// }
// int max(int a, int b)
// {
// 	return a > b ? a : b;
// }
// int height(node *root)
// {
// 	if (root == NULL)
// 	{
// 		return -1;
// 	}
// 	else
// 	{
// 		return 1 + max(height(root->left), height(root->right));
// 	}
// }
// void level_order_traversal(node *root) // BFS
// {
// 	queue<node *> n;
// 	n.push(root);
// 	while (n.empty() == 0)
// 	{
// 		cout << n.front()->data << " ";
// 		if (n.front()->left != NULL)
// 		{
// 			n.push(n.front()->left);
// 		}
// 		if (n.front()->right != NULL)
// 		{
// 			n.push(n.front()->right);
// 		}
// 		n.pop();
// 	}
// }
// void preordetraversal(node *root) // root left right
// {
// 	if (root == NULL)
// 	{
// 		return;
// 	}
// 	cout << root->data << " ";
// 	preordetraversal(root->left);
// 	preordetraversal(root->right);
// }
// void inordertraversal(node *root) // left root right
// {
// 	if (root == NULL)
// 	{
// 		return;
// 	}
// 	inordertraversal(root->left);
// 	cout << root->data << " ";
// 	inordertraversal(root->right);
// }
// void postordertraversal(node *root) // left right root
// {
// 	if (root == NULL)
// 	{
// 		return;
// 	}
// 	postordertraversal(root->left);
// 	postordertraversal(root->right);
// 	cout << root->data << " ";
// }
// node *findpredecessor(node *r)
// {
// 	r = r->left;
// 	while (r->right != NULL)
// 	{
// 		r = r->right;
// 	}
// 	return r;
// }
// node *findpredecessor(node *root, int x)
// {
// 	node *r = nodeadress(x, root);
// 	if (r->left != NULL)
// 	{
// 		r = r->left;
// 		while (r->right != NULL)
// 		{
// 			r = r->right;
// 		}
// 		return r;
// 	}
// 	else
// 	{
// 		node *pre;
// 		while (root != r)
// 		{
// 			if (root->data > r->data)
// 			{
// 				root = root->left;
// 			}
// 			else
// 			{
// 				pre = root;
// 				root = root->right;
// 			}
// 		}
// 		return pre;
// 	}
// }
// node *del(node *root, int x)
// {
// 	if (root->data > x)
// 	{
// 		root->left = del(root->left, x);
// 	}
// 	else if (root->data < x)
// 	{
// 		root->right = del(root->right, x);
// 	}
// 	else
// 	{
// 		if (root->left == NULL && root->right == NULL)
// 		{
// 			delete root;
// 			root = NULL;
// 		}
// 		else if (root->left != NULL && root->right == NULL)
// 		{
// 			node *t = root;
// 			root = root->left;
// 			delete t;
// 		}
// 		else if (root->right != NULL && root->left == NULL)
// 		{
// 			node *t = root;
// 			root = root->right;
// 			delete t;
// 		}
// 		else
// 		{
// 			node *pre = findpredecessor(root);
// 			root->data = pre->data;
// 			root->left = del(root->left, pre->data); // delete predecessor node
// 		}
// 	}
// 	return root;
// }

// int main()
// {
// 	node *root = NULL;
// 	root = insert(7, root);
// 	root = insert(8, root);
// 	root = insert(-1, root);
// 	root = insert(5, root);
// 	root = insert(1, root);
// 	root = insert(9, root);
// 	cout << search(8, root) << endl;
// 	cout << findmin(root);
// 	cout << endl
// 		 << height(root) << endl;
// 	level_order_traversal(root);
// 	cout << endl;
// 	inordertraversal(root);
// 	cout << endl;
// 	postordertraversal(root);
// 	cout << endl;
// 	preordetraversal(root);
// 	root = del(root, 7);
// 	cout << endl;
// 	level_order_traversal(root);
// 	cout << endl;
// 	root = insert(7, root);
// 	cout << findpredecessor(root, 7)->data;
// }

//red black tree

//#define R "red"
//#define B "black"
//
//struct node
//{
//    int data;
//    node *left,*right,*parent;
//    string color;
//
//};
//
//node *getnewnode(int x)
//{
//    node *root=new node();
//    root->data=x;
//    root->left=NULL;
//    root->right=NULL;
//    root->color=R;
//    return root;
//}
//
//node *BSTinsert(node *root,node *r)
//{
//    if(root==NULL)
//    {
//        root=r;
//    }
//    else if(root->data>r->data)
//    {
//        root->left=BSTinsert(root->left,r);
//        root->left->parent=root;
//    }
//    else
//    {
//
//        root->right=BSTinsert(root->right,r);
//        root->right->parent=root;
//    }
//    return root;
//}
//node* leftrotate(node *root, node*x)
//{
//    node *p=x->parent;
//    node*y=x->right;
//    node*a=x->left;
//    node *b=y->left;
//    if(p==NULL)
//    {
//        root=y;
//    }
//    else if(p->left==x)
//    {
//        p->left=y;
//    }
//    else
//    {
//        p->right=y;
//    }
//    y->left=x;
//    x->right=b;
//    if(b!=NULL)
//    {b->parent=x;}
//    x->parent=y;
//    y->parent=p;
//    return root;
//}
//node *rightrotate(node *root,node *x)
//{
//    node *p=x->parent;
//    node*c=x->right;
//    node*y=x->left;
//    node *b=y->right;
//    if(p==NULL)
//    {
//        root=y;
//    }
//    else if(p->left==x)
//    {
//        p->left=y;
//    }
//    else
//    {
//        p->right=y;
//    }
//    y->right=x;
//    x->left=b;
//    if(b!=NULL)
//    {b->parent=x;}
//    x->parent=y;
//    y->parent=p;
//    return root;
//}
//node *fix(node *root,node *r)
//{
//    node *y=r->parent;
//    if(y==NULL) // r is root
//    {
//        r->color=B;
//        return root;
//    }
//    else if(y->color==B)
//    {
//        return root;
//    }
//    else                       //if(y->color==R)
//    {
//        node *w=y->parent; // r grandparent
//        node *z;
//        if(w->left==y)
//        {
//            z=w->right;
//        }
//        else
//        {
//            z=w->left;
//        }
//
//        if ( z==NULL || z->color==B  )
//        {
//            if(w->left==y && y->left==r)  // left left case
//            {
//                root=rightrotate(root,w);
//                w->color=R;
//                y->color=B;
//            }
//            else if(w->left==y && y->right==r)
//            {
//                root=leftrotate(root,y);
//                root=rightrotate(root,w);
//                w->color=R;
//                r->color=B;
//            }
//            else if(w->right==y && y->right==r)
//            {
//                root=leftrotate(root,w);
//                w->color=R;
//                y->color=B;
//            }
//            else
//            {
//                root=rightrotate(root,y);
//                root=leftrotate(root,w);
//                w->color=R;
//                r->color=B;
//            }
//        }
//        else  //z->color==red
//        {
//            z->color=B;
//            y->color=B;
//            w->color=R;
//            root=fix(root,w);
//        }
//    return root;
//}
//}
//
//node* insert(node *root,int x)
//{
//    node *r=getnewnode(x);
//    if(r==root)
//    {
//        r->parent==NULL;
//    }
//    root=BSTinsert(root,r);
//    root=fix(root,r);
//    return root;
//}
//void inorder_traversal(node *root)
//{
//    if(root==NULL)
//    {
//        return;
//    }
//    inorder_traversal(root->left);
//    cout<<root->data<<" "<<root->color<< " ";
//    inorder_traversal(root->right);
//}
//void levelordertraversal(node *root)
//{
//    if(root==NULL)
//    {
//        return;
//    }
//    queue<node*>q;
//    q.push(root);
//    while(q.empty()==0)
//    {
//        cout<<q.front()->data<<" "<<q.front()->color<<" ";
//        if(q.front()->left!=NULL)
//        {
//            q.push(q.front()->left);
//        }
//        if(q.front()->right!=NULL)
//        {
//            q.push(q.front()->right);
//        }
//        q.pop();
//    }
//}
//node* del(node *root,int x)
//{
//
//}
//
//
//int main()
//{
//    node *root=NULL;
//    root=insert(root,7);
//    root=insert(root,6);
//    root=insert(root,5);
//    root=insert(root,4);
//    root=insert(root,3);
//    root=insert(root,2);
//    root=insert(root,1);
//    levelordertraversal(root);
//}
//
//
//
//
//

// hashing with chaining

//int n;
//int has(int key)
//{
//    return key%n;
//}
//
//bool lookup(int x,list<int>l)
//{
//    for(auto i:l)
//    {
//        if(i==x)
//        {
//            return true;
//        }
//    }
//    return false;
//}
//void del(int x,list<int>&l)
//{
//    l.erase(find(l.begin(),l.end(),x));
//}
//
//int main()
//{
//    cin>>n;
//    int key;
//    list<int>l[n];
//    for(int i=0;i<n;++i)
//    {
//        cin>>key;
//        l[has(key)].push_back(key);
//    }
//    int x;
//    cin>>x;
//    cout<<lookup(x,l[has(x)])<<endl;
//    del(14,l[has(14)]);
//    for(int i=0;i<n;++i)
//    {
//        cout<<i<<"-> ";
//        for(auto j:l[i])
//        {
//            cout<<j<<" ";
//        }
//            cout<<endl;
//    }
//
//}

// Random contraction algorithim

//void merg(unordered_map<int,vector<int>>&u,int src,int dest)
//{
//     vector<int>v=u[dest];
//    v.insert(v.end(),u[src].begin(),u[src].end());
//    u[src]=v;
//    for(auto i:u[dest])
//    {
//        u[i].erase(find(u[i].begin(),u[i].end(),dest));
//        if(i==src)
//        {
//            while(find(u[i].begin(),u[i].end(),src)!=u[i].end())
//            {
//            u[i].erase(find(u[i].begin(),u[i].end(),src)); //removing self loops
//            }
//        }
//        else
//        {
//            u[i].push_back(src);
//        }
//    }
//    u.erase(dest);
//}
//
//
//
//int randomcontractionalgo(unordered_map<int,vector<int>>u,int v,vector<int>nodes)
//{
//int src,dest,j;
//    while(v>2)
//    {
//        srand(time(NULL));
//        src=nodes[rand()%nodes.size()];
//         j=rand()%u[src].size();
//        dest=u[src][j];
//        cout<<src<<" "<<dest<<endl;
//        srand(time(NULL));
//        merg(u,src,dest);
//        for(auto i:u)
//        {
//            cout<<i.first<<"->";
//            for(auto j:i.second)
//            {
//                cout<<j<<" ";
//            }
//            cout<<endl;
//        }
//
//        --v;
//        nodes.erase(find(nodes.begin(),nodes.end(),dest));
//    }
//
//    for(auto i:u)
//    {
//        if(i.second.size()!=0)
//        {
//            return i.second.size();
//        }
//    }
//
//}
//
//int main()
//{
//    unordered_map<int,vector<int>>u;
//    int v=4;
//
//    u[0]={1,3};
//    u[1]={0,2,3};
//    u[2]={1,3};
//    u[3]={0,1,2};
//    vector<int>nodes={0,1,2,3};
//    for(int i=0;i<10;++i)
//        cout<<randomcontractionalgo(u,v,nodes)<<endl<<endl;
//}
//

// PRIMS MST

// typedef pair<int, int> p;
// vector<vector<int>> costs;
// vector<vector<int>> adlist(vector<vector<int>> edges, int n)
// {
// 	vector<vector<int>> list(n + 1);
// 	costs.resize(n + 1);
// 	for (int i = 0; i < edges.size(); ++i)
// 	{
// 		list[edges[i][0]].push_back(edges[i][1]);
// 		list[edges[i][1]].push_back(edges[i][0]);
// 		costs[edges[i][0]].push_back(edges[i][2]);
// 		costs[edges[i][1]].push_back(edges[i][2]);
// 	}
// 	return list;
// }
// int prims(int n, vector<vector<int>> edges, int start)
// {
// 	vector<bool> exp(n + 1);
// 	exp[start] = 1;
// 	vector<int> x = {start};
// 	vector<vector<int>> adjlist = adlist(edges, n);
// 	priority_queue<p, vector<p>, greater<p>> pq; // pq.first=cheapest edge (u,v)
// 	for (int i = 0; i < adjlist[start].size(); ++i)
// 	{
// 		pq.push(make_pair(costs[start][i], adjlist[start][i]));
// 	}
// 	int sum = 0;
// 	int v;
// 	while (x.size() != n)
// 	{
// 		v = pq.top().second; // cheapest  vertex
// 		if (exp[v] == 0)
// 		{
// 			sum = sum + pq.top().first;
// 			x.push_back(v);
// 			exp[v] = 1;
// 			pq.pop();
// 			for (int i = 0; i < adjlist[v].size(); ++i)
// 			{
// 				pq.push(make_pair(costs[v][i], adjlist[v][i]));
// 			}
// 		}
// 		else
// 		{
// 			pq.pop();
// 		}
// 	}

// 	return sum;
// }

// int main()
// {
// 	int n, m;
// 	cin >> n;
// 	cin >> m;

// 	vector<vector<int>> edges(m);
// 	for (int i = 0; i < m; i++)
// 	{
// 		edges[i].resize(3);

// 		for (int j = 0; j < 3; j++)
// 		{
// 			cin >> edges[i][j];
// 		}
// 	}

// 	int start;
// 	cin >> start;

// 	int result = prims(n, edges, start);

// 	cout << result << "\n";
/*test case
5 6
1 2 3
1 3 4
4 2 6
5 2 2
2 3 5
3 5 7
1
result=15
*/
return 0;
}

// Kruskal(MST) bool DFS(vector<vector<int>> &edges, int &u, int &v, vector<bool> &exp)
// {
// 	exp[u] = 1;
// 	bool t = 0;
// 	for (int i = 0; i < edges[u].size(); ++i)
// 	{
// 		if (edges[u][i] == v)
// 		{
// 			return true;
// 		}
// 		if (exp[edges[u][i]] == 0)
// 		{
// 			t = DFS(edges, edges[u][i], v, exp);
// 		}
// 	}
// 	return t || false;
// }

// int kruskals(int n, vector<int> src, vector<int> dest, vector<int> weight) {
// map<int,pair<int,int>>m;
// for(int i=0;i<src.size();++i)
// {
//    m[weight[i]]=make_pair(src[i], dest[i]);
// }
// vector<vector<int>>t(n+1);
// int sum=0;
// for(auto i=m.begin();i!=m.end();++i)
// {
//    vector<bool>exp(n+1);
//    if(DFS(t,i->second.first,i->second.second,exp)==0) // no cycle
//    {
//        t[i->second.first].push_back(i->second.second);
//        t[i->second.second].push_back(i->second.first);
//        sum=sum+i->first;
//    }
// }
// return sum;
// }
// int main()
// {
//    int g_nodes;
//    cin>>g_nodes;
//    int g_edges;
//    cin>>g_edges;

//    vector<int> g_from(g_edges);
//    vector<int> g_to(g_edges);
//    vector<int> g_weight(g_edges);

//    for (int i = 0; i < g_edges; i++) {

//        int g_from_temp;
//        int g_to_temp;
//        int g_weight_temp;
//        cin>>g_from_temp;
//        cin>>g_to_temp;
//        cin>>g_weight_temp;

//        g_from[i] = g_from_temp;
//        g_to[i] = g_to_temp;
//        g_weight[i] = g_weight_temp;
//    }

//    int res = kruskals(g_nodes, g_from, g_to, g_weight);
//    cout<<res;
//    return 0;
// }

/*
5 7
1 2 20
1 3 50
1 4 70
1 5 90
2 3 30
3 4 40
4 5 60
150
*/

// kruskals MST using union find DS

// unordered_map<int, int> leader;
// unordered_map<int, int> Rank;
// unordered_map<int, int> siz;

// int find(int x)
// {
// 	if (leader[x] == x)
// 	{
// 		return x;
// 	}
// 	else
// 	{
// 		leader[x] = find(leader[x]); // pointer rewiring using path compression
// 		return leader[x];
// 	}
// }
// void Union(int u, int v) // by rank
// {
// 	int x = find(u); // leader u
// 	int y = find(v); // leader v
// 	if (x == y)
// 	{
// 		return;
// 	}
// 	if (Rank[x] > Rank[y])
// 	{
// 		leader[y] = x;
// 		++siz[x];
// 	}
// 	else if (Rank[x] < Rank[y])
// 	{
// 		leader[x] = y;
// 		++siz[y];
// 	}
// 	else
// 	{
// 		leader[y] = x;
// 		++siz[x];
// 		++Rank[x];
// 	}
// }
// void initialize(multimap<int, pair<int, int>> m)
// {
// 	for (auto i : m)
// 	{
// 		leader[i.second.first] = i.second.first;
// 		leader[i.second.second] = i.second.second;
// 		Rank[i.second.first] = 0;
// 		Rank[i.second.second] = 0;
// 	}
// }

// int kruskals(int n, vector<int> src, vector<int> dest, vector<int> weight)
// {
// 	multimap<int, pair<int, int>> m;
// 	for (int i = 0; i < src.size(); ++i)
// 	{
// 		m[weight[i]] = make_pair(src[i], dest[i]);
// 	}
// 	int sum = 0;
// 	initialize(m);
// 	for (auto i = m.begin(); i != m.end(); ++i)
// 	{
// 		if (find(i->second.first) != find(i->second.second))
// 		{
// 			Union(i->second.first, (i->second.second)); // leaders of both become same
// 			sum = sum + i->first;
// 		}
// 	}
// 	return sum;
// }
// int main()
// {
// 	int g_nodes;
// 	cin >> g_nodes;
// 	int g_edges;
// 	cin >> g_edges;

// 	vector<int> g_from(g_edges);
// 	vector<int> g_to(g_edges);
// 	vector<int> g_weight(g_edges);

// 	for (int i = 0; i < g_edges; i++) {

// 		int g_from_temp;
// 		int g_to_temp;
// 		int g_weight_temp;
// 		cin >> g_from_temp;
// 		cin >> g_to_temp;
// 		cin >> g_weight_temp;

// 		g_from[i] = g_from_temp;
// 		g_to[i] = g_to_temp;
// 		g_weight[i] = g_weight_temp;
// 	}

// 	int res = kruskals(g_nodes, g_from, g_to, g_weight);
// 	cout << res;
// 	return 0;

// }

// Huffmans greedy algorithim

//struct node
//{
//    int freq;
//    char c;
//    bool bit;
//    node *left;
//    node *right;
//};
//
//typedef pair<int,node*> p;
//
//node *getnewnode(int freq,char c)
//{
//    node *temp=new node();
//    temp->freq=freq;
//    temp->c=c;
//    temp->left=NULL;
//    temp->right=NULL;
//    return temp;
//}
//node *merg(node *r1,node *r2)
//{
//    node *root=getnewnode(r1->freq+r2->freq,'\0');
//    root->left=r1;
//    root->right=r2;
//    r1->bit=1;
//    r2->bit=0;
//    return root;
//}
//vector<bool>codes;
//void printcodes(node* root,node *mega)
//{
//    if(root==NULL)
//    {
//        return;
//    }
//    if(root!=mega)
//    {
//    codes.push_back(root->bit);
//    }
//    printcodes(root->left,mega);
//    if(root->left==NULL && root->right==NULL)
//    {
//        cout<<root->c<< " ";
//        for(int i=0;i<codes.size();++i)
//        {
//            cout<<codes[i];
//        }
//        cout<<endl;
//    }
//    printcodes(root->right,mega);
//    codes.pop_back();
//
//}
//
//int main()
//{
//    int n;
//    cin>>n;
//    priority_queue<p,vector<p>,greater<p>>pq;
//    char c;
//    int f;
//    for(int i=0;i<n;++i)
//    {
//        cin>>c;
//        cin>>f;
//        node * temp=getnewnode(f,c );
//        pq.push(make_pair(f,temp));
//    }
//
//    while(pq.size()>1)
//    {
//        p p1=pq.top();
//        pq.pop();
//        p p2=pq.top();
//        pq.pop();
//        p p3;
//        p3.second=merg(p1.second,p2.second);
//        p3.first=p3.second->freq;
//        pq.push(p3);
//    }
//    node *root=pq.top().second;
//    printcodes(root,root);
//}

// DYNAMIC PROGRAMMING
//1D PROBLEM
// INDEPENDENT SET OF MAX WEIGHTS

//int max(int &a,int &b)
//{
//    return a>=b?a:b;
//}
//int main()
//{
//    vector<int>v;
//    int n;
//    cin>>n;
//    int x;
//    for(int i=0;i<n;++i)
//    {
//        cin>>x;
//        v.push_back(x);
//    }
//    vector<int>a(n);
//    a[0]=v[0];
//    a[1]=max(v[1],v[0]);
//    for(int i=2;i<n;++i)
//    {
//        a[i]=max(a[i-1],a[i-2]+v[i]);
//    }
//    cout<<a[n-1];
//}

//knapsack problem

//int max(int &a,int &b)
//{
//    return a>=b?a:b;
//}
//
//int main()
//{
//    int n;
//    cin>>n;
//    vector<int>v;
//    vector<int>w;
//    int x;
//    int cap;
//    for(int i=0;i<n;++i)
//    {
//        cin>>x;
//        cin>>cap;
//        v.push_back(x);
//        w.push_back(cap);
//    }
//    cin>>cap;
//    vector<vector<int>>a(n+1);
//    for(int i=0;i<n+1;++i)
//    {
//        a[i].resize(cap+1);
//    }
//    for(int i=1;i<n+1;++i)
//    {
//        for(int j=0;j<cap+1;++j)
//        {
//            if(j>w[i-1])
//            {
//            a[i][j]=max(a[i-1][j],a[i-1][j-w[i-1]]+v[i-1]);
//            }
//            else
//            {
//                a[i][j]=a[i-1][j];
//            }
//        }
//    }
//    cout<<"score matrix"<<endl;
//    for(int i=0;i<a.size();++i)
//    {
//        for(int j=0;j<a[i].size();++j)
//        {
//            cout<<a[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//    cout<<"max loot= "<<a[n][cap]<<endl;
//    int i=n;
//    int j=cap;
//    vector<int>verticesinsack;
//    while(i>0 && j>0)
//    {
//        if(a[i][j]==a[i-1][j])
//        {
//            --i;
//        }
//        else
//        {
//            verticesinsack.push_back(v[i-1]);
//            j=j-w[i-1];
//            --i;
//        }
//    }
//    cout<<endl<<"things in sack"<<endl;
//    for(int i=0;i<verticesinsack.size();++i)
//    {
//        cout<<verticesinsack[i]<<" ";
//    }
//}

// optimal BST

//vector<int>v;
//vector<int>freq;
//vector<vector<vector<long long int>>>dp;
//
//long long int cost(int beg,int en,int l)
//{
//    if(beg>en)
//    {
//        return 0;
//    }
//    if(dp[beg][en][l]!=0)
//    {
//        return dp[beg][en][l];
//    }
//    long long int m=INT_MAX;
//    long long int x;
//    for(int i=beg;i<=en;++i)
//    {
//        x=cost(beg,i-1,l+1)+cost(i+1,en,l+1)+(l*freq[i]);
//        if(x<m)
//        {
//            m=x;
//        }
//    }
//    dp[beg][en][l]=m;
//    return dp[beg][en][l];
//}
//
//int main()
//{
//    int n,x;
//    cin>>n;
//    dp.resize(n);
//    for(int i=0;i<n;++i)
//    {
//        dp[i].resize(n);
//        for(int j=0;j<n;++j)
//        {
//            dp[i][j].resize(n+1);
//        }
//    }
//
//    for(int i=0;i<n;++i)
//    {
//        cin>>x;
//        v.push_back(x);
//        cin>>x;
//        freq.push_back(x);
//    }
//    cout<<cost(0,n-1,1);
//}

//Bellman ford

//#include<bits/stdc++.h>
//using namespace std;
//
//struct edge
//{
//    int src,dest,wt;
//};
//
//int main()
//{
//    unordered_map<int,int>predeccesor;
//    int V,E;
//    cin>>V;
//    cin>>E;
//    int a,b,l;
//    vector<edge>e;
//    for(int i=1;i<=E;++i)
//    {
//        cin>>a>>b>>l;
//        edge e0;
//        e0.src=a;
//        e0.dest=b;
//        e0.wt=l;
//        e.push_back(e0);
//    }
//    int dist[V];
//    for(int i=0;i<V;++i)
//    {
//        dist[i]=INT_MAX;
//    }
//    int s,dest;
//    cin>>s>>dest;
//    dist[s]=0;
//    int u,v,lt;
//
//    for(int i=1;i<V;++i)
//    {
//        for(int j=0;j<E;++j)
//        {
//            u=e[j].src;
//            v=e[j].dest;
//            lt=e[j].wt;
//            if(dist[u]!=INT_MAX && dist[v]>dist[u]+lt)
//            {
//                dist[v]=dist[u]+lt;
//                predeccesor[v]=u;
//            }
//        }
//        cout<<endl;
//    }
//    //cycle check
//    bool check=1;
//    for(int j=0;j<e.size();++j)
//    {
//            u=e[j].src;
//            v=e[j].dest;
//            lt=e[j].wt;
//            if(dist[u]!=INT_MAX && dist[v]>dist[u]+l)
//            {
//                cout<<"-ve cycle exists"<<endl;
//                check=0;
//                break;
//            }
//    }
//    if(check)
//    {
//        cout<<dist[dest];
//        for(int i=dest;i!=s;)
//        {
//            cout<<" SP="<<predeccesor[i]<<" ";
//            i=predeccesor[i];
//        }
//    }
//
//}
//
//

//FLOYD WARSHALL ALGO

//#define M INT_MAX
//#define n 4
//
// void printpath(int i,int j,int path[][n])
// {
//    if(path[i][j]==i || path[i][j]==-1)
//    {
//        return ;
//    }
//    printpath(i,path[i][j],path);
//    cout<<"-> "<<path[i][j];
//    printpath(path[i][j],j,path);
// }
// int main()
// {
//    int adjMatrix[n][n] =
// 	{
// 		{ 0, M,	-2, M },
// 		{ 4, 0, 3, M },
// 		{ M, M, 0, 2 },
// 		{ M, -1, M, 0 }
// 	};
// 	long int dist[n][n];
// 	int path[n][n];
// 	for(int i=0;i<n;++i)
//    {
//        path[i][i]=-1;
//        for(int j=0;j<n;++j)
//        {
//            dist[i][j]=adjMatrix[i][j];
//            if(i!=j && dist[i][j]!=INT_MAX)
//            {
//                path[i][j]=i;
//            }
//        }
//    }
//    for(int k=0;k<n;++k)
//    {
//        for(int i=0;i<n;++i)
//        {
//            for(int j=0;j<n;++j)
//            {
//                if(dist[i][j]>dist[i][k]+dist[k][j] && dist[i][k]!=INT_MAX && dist[k][j]!=INT_MAX)
//                {
//                    dist[i][j]=dist[i][k]+dist[k][j];
//                    path[i][j]=k;
//                }
//                if(dist[i][i]<0)
//                {
//                    cout<<"-ve cycle";
//                    return 0;
//                }
//            }
//        }
//    }
//    for(int i=0;i<n;++i)
//    {
//        for(int j=0;j<n;++j)
//        {
//            cout<<dist[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//    cout<<"SP's "<<endl;
//    for(int i=0;i<n;++i)
//    {
//        for(int j=0;j<n;++j)
//        {
//            cout<<i;
//            printpath(i,j,path);
//            cout<<"->"<<j;
//            cout<<endl;
//        }
//        cout<<endl;
//    }

// }

// JOHNSONS ALGO

//typedef pair<int,int>p;
//vector<vector<p>>adjlist;
//#define n 6
//
//
//vector<long long int>djisktaSPA(int s)
//{
//unordered_map<int,bool>exp;
//vector<int>x;
//vector<long long int>a;
//a.assign(n,INT_MAX);
//a[s]=0;
//x.push_back(s); // store explored vertices
//priority_queue<p,vector<p>,greater<p>>notx; // stores pair with key as shortest path distance and second=node
//exp[s]=1;
//for(int i=0;i<adjlist[x.back()].size();++i)
//{
//notx.push(make_pair(a[x.back()]+adjlist[x.back()][i].second,adjlist[x.back()][i].first));
//}
//
//while(notx.empty()!=1)
//{
//if(exp[notx.top().second]==0)
//{
//x.push_back(notx.top().second);
//a[x.back()]=notx.top().first;
//exp[x.back()]=1;
//}
//for(int i=0;i<adjlist[x.back()].size();++i)
//{
//if(exp[adjlist[x.back()][i].first]==0)
//{
//    notx.push(make_pair(a[x.back()]+adjlist[x.back()][i].second,adjlist[x.back()][i].first));
//}
//}
//notx.pop();
//}
//return a;
//}
//
//
//struct edge
//{
//    int src,dest,wt;
//};
//
//
//int main()
//{
//vector<edge>e={{0,1,-2},{1,2,1},{2,0,4},{2,4,-3},{2,3,2},{5,3,1},{5,4,-4}};
//for(int i=0;i<6;++i)
//{
//    e.push_back({6,i,0});
//}
//
//long long int dist[7];
//dist[6]=0;
//for(int i=0;i<6;++i)
//{
//    dist[i]=INT_MAX;
//}
//int u,v;
//for(int i=0;i<6;++i)
//{
//    for(int j=0;j<e.size();++j)
//    {
//        u=e[j].src;
//        v=e[j].dest;
//        if(dist[v]>dist[u]+e[j].wt && dist[u]!=INT_MAX)
//        {
//            dist[v]=dist[u]+e[j].wt;
//        }
//    }
//}
//
//for(int j=0;j<e.size();++j)
//{
//    u=e[j].src;
//    v=e[j].dest;
//    if(dist[u]+e[j].wt<dist[v] && dist[u]!=INT_MAX)
//    {
//        cout<<"-ve cycle "<<endl;
//        return 0;
//    }
//}
//
//adjlist.resize(6);
//
//for(int i=0;i<7;++i)
//{
//    e[i].wt=e[i].wt+dist[e[i].src]-dist[e[i].dest];
//    adjlist[e[i].src].push_back(make_pair(e[i].dest,e[i].wt));
//}
//
//vector<vector<long long int>>d;
//vector<long long int>dj;
//for(int i=0;i<6;++i)
//{
//    dj=djisktaSPA(i);
//    d.push_back(dj);
//}
//for(int i=0;i<6;++i)
//{
//    for(int j=0;j<6;++j)
//    {
//        if(d[i][j]==INT_MAX)
//        {
//            cout<<"INF ";
//        }
//        else
//        {
//            cout<<d[i][j]+dist[j]-dist[i]<<" ";
//        }
//    }
//    cout<<endl;
//}
//
//}

// VERTEX COVER PROBLEM

//struct edge
//{
//    int src,dest;
//};
//
//vector<int>vc;
//
//bool vertexcover(vector<edge>&e,int k)
//{
//    if(e.size()!=0 && k==0)
//    {
//        return 0;
//    }
//    if(e.size()==0)
//    {
//        return 1;
//    }
//    int u=e[e.size()-1].src;
//    int v=e[e.size()-1].dest;
//    vc.push_back(u);
//    vector<edge>e2;
//    vector<edge>e3;
//    for(int i=0;i<e.size();++i)
//    {
//        if(e[i].src!=u && e[i].dest!=u)
//        {
//            e2.push_back(e[i]);
//        }
//        if(e[i].src!=v && e[i].dest!=v )
//        {
//            e3.push_back(e[i]);
//        }
//    }
//    bool b1=vertexcover(e2,k-1);
//    if(b1==1)
//    {
//        return 1;
//    }
//    vc.pop_back();
//    vc.push_back(v);
//    bool b2=vertexcover(e3,k-1);
//    return b2;
//}
//
//
//
//int main()
//{
//
//vector<edge>e={{1,2},{1,4},{1,6},{2,3},{2,4},{4,7},{7,8},{3,5},{8,5},{3,8}};
//
//cout<<" vertex cover = "<<endl;
//if(vertexcover(e,8)==0)
//{
//    cout<<"FAIL! "<<endl;
//}
//else
//{
//    for(int i=0;i<vc.size();++i)
//    {
//        cout<<vc[i]<<" ";
//    }
//}
//
//
//}

// travelling slaesman problem

//vector<vector<int>>adjlist{{1,2,3},{0,2,3},{0,1,3},{0,1,2}};
//vector<vector<int>>dist{{2,4,1},{2,5,3},{4,5,6},{1,3,6}};
//
//long int TSP(unordered_set<int>s,int i)
//{
//    if(s.size()==2)
//    {
//    return dist[0][i-1];
//    }
//
//    long int mini=INT_MAX;
//    int x;
//    s.erase(i);
//    for(int j=0;j<adjlist[i].size();++j)
//    {
//        if(adjlist[i][j]==0 || s.find(adjlist[i][j])==s.end())
//        {
//            continue;
//        }
//        x=TSP(s,adjlist[i][j])+dist[i][j];
//        if(x<mini )
//        {
//            mini=x;
//        }
//    }
//    return mini;
//}
//
//int main()
//{
//unordered_set<int>S;
//int mini=INT_MAX;
//S={0,1,2,3};
//for(int j=1;j<4;++j)
//{
//    if(TSP(S,j)+dist[0][j-1]<mini)
//    {
//        mini=TSP(S,j)+dist[0][j-1];
//    }
//}
//cout<<mini;
//}

// chinese remainder theorem and euclidean algo

// vector<int> ai = {2, 3, 1};
// vector<int> mi = {3, 4, 5};
// int hcf, x, y;

// void gcdextended(int a, int b)
// {
// 	if (b == 0)
// 	{
// 		hcf = a;
// 		x = 1;
// 		y = 0;
// 		return;
// 	}
// 	else
// 	{
// 		gcdextended(b, a % b);
// 		int temp = x;
// 		x = y;
// 		y = temp - (a / b) * y;
// 	}
// }
// int modinverse(int a, int m) //when a and m are coprime (a/b)%m= a* (binverse under m)
// {
// 	gcdextended(a, m);
// 	return (x + m) % m;
// }
// bool isPossible(int a, int b, int c) // checks if ax+by==c has an integral soln
// {
// 	return (c % __gcd(a, b) == 0);
// }
// int chineseremaindertheorem()
// {
// 	int m = 1;
// 	for (int i = 0; i < mi.size(); ++i)
// 	{
// 		m *= mi[i];
// 	}
// 	int x = 0;
// 	int yi;
// 	for (int i = 0; i < mi.size(); ++i)
// 	{
// 		yi = m / mi[i];
// 		x += ai[i] * yi * modinverse(yi, mi[i]);
// 	}
// 	return x % m;
// }

// int main()
// {
// 	gcdextended(16, 10);
// 	cout << hcf << " " << x << " " << y << endl;
// 	cout << modinverse(5, 12);
// 	cout << chineseremaindertheorem();
// 	cout << "x";
// }

// LIS in o(n*logn) using binary search dp

// int patiencesort(vector<int> v)
// {
// 	vector<int> crd = {v[0]};
// 	unordered_map<int, int> par;
// 	int l = 1; // number of piles
// 	par[v[0]] = -1;
// 	for (size_t i = 1; i < v.size(); i++)
// 	{
// 		auto it = lower_bound(crd.begin(), crd.begin() + l, v[i]);
// 		if (it == crd.begin() + l)
// 		{
// 			crd.push_back(v[i]);
// 			par[v[i]] = crd[l - 1];
// 			++l;
// 		}
// 		else
// 		{
// 			*it = v[i];
// 			if (it - crd.begin() != 0)
// 			{
// 				par[v[i]] = crd[it - crd.begin() - 1];
// 			}
// 			else
// 			{
// 				par[v[i]] = -1;
// 			}
// 		}
// 	}
// 	return crd.size();
// }

// int main()
// {
// 	vector<int> v =  {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
// 	cout <<" "<< patiencesort(v) << "\n";
// }

// segment tree

// vector<int> arr;
// vector<int> tree;    // sums
// vector<int> mintree; // mins
// vector<int> lazy;
// int n, x;

// int construct(int l, int r, int pos)
// {
//     if (l == r)
//     {
//         tree[pos] = arr[l];
//         return tree[pos];
//     }
//     tree[pos] = construct(l, (r + l) / 2, pos * 2 + 1) + construct((r + l) / 2 + 1, r, pos * 2 + 2);
//     return tree[pos];
// }
// int constructmin(int l, int r, int pos)
// {
//     if (l == r)
//     {
//         return mintree[pos] = arr[l];
//     }
//     return mintree[pos] = min(constructmin(l, (r + l) / 2, pos * 2 + 1), constructmin((r + l) / 2 + 1, r, pos * 2 + 2));
// }
// int sum(int a, int b, int l, int r, int pos) // finds sum[a...b]
// {
//     if (lazy[pos] != 0)
//     {
//         if (l != r)
//         {
//             lazy[pos * 2 + 1] += lazy[pos]; // pasing up val to children ranges
//             lazy[pos * 2 + 2] += lazy[pos];
//         }
//         tree[pos] += (r - l + 1) * (lazy[pos]); // updating val
//         mintree[pos] += lazy[pos];
//         lazy[pos] = 0;
//     }
//     if (l >= a && r <= b)
//     {
//         return tree[pos];
//     }
//     if (l > b || r < a)
//     {
//         return 0;
//     }
//     return sum(a, b, (r + l) / 2 + 1, r, pos * 2 + 2) + sum(a, b, l, (r + l) / 2, pos * 2 + 1);
// }
// void update(int val, int k, int l, int r, int pos) // changes val of kth indexed item by val
// {
//     if (k < l || k > r)
//     {
//         return;
//     }
//     if (k >= l && k <= r)
//     {
//         tree[pos] += val;
//     }
//     if (l == r && l == k)
//     {
//         mintree[pos] = arr[l];
//     }
//     if (l != r)
//     {
//         update(val, k, (r + l) / 2 + 1, r, pos * 2 + 2);
//         update(val, k, l, (r + l) / 2, pos * 2 + 1);
//         mintree[pos] = min(mintree[pos * 2 + 1], mintree[pos * 2 + 2]);
//     }
// }
// int mini(int l, int r, int a, int b, int pos)
// {
//     if (lazy[pos] != 0)
//     {
//         if (l != r)
//         {
//             lazy[pos * 2 + 1] += lazy[pos]; // pasing up val to children ranges
//             lazy[pos * 2 + 2] += lazy[pos];
//         }
//         tree[pos] += (r - l + 1) * (lazy[pos]); // updating val
//         mintree[pos] += lazy[pos];
//         lazy[pos] = 0;
//     }
//     if (l >= a && r <= b)
//     {
//         return mintree[pos];
//     }
//     if (r < a || l > b)
//     {
//         return INT_MAX;
//     }
//     return min(mini(l, (r + l) / 2, a, b, pos * 2 + 1), mini((r + l) / 2 + 1, r, a, b, pos * 2 + 2));
// }
// int rangeupdate(int l, int r, int a, int b, int k, int pos)
// {
//     if (l >= a && r <= b)
//     {
//         lazy[pos] = k;
//         if (l != r)
//         {
//             lazy[pos * 2 + 1] += lazy[pos]; // pasing up val to children ranges
//             lazy[pos * 2 + 2] += lazy[pos];
//         }
//         tree[pos] += (r - l + 1) * (lazy[pos]); // updating val
//         mintree[pos] += lazy[pos];
//         lazy[pos] = 0;
//         return tree[pos];
//     }
//     if (l > b || r < a)
//     {
//         return tree[pos];
//     }
//     if (r != l)
//     {
//         tree[pos] = rangeupdate(l, (r + l) / 2, a, b, k, pos * 2 + 1) + rangeupdate((r + l) / 2 + 1, r, a, b, k, pos * 2 + 2); // in case value of children are changed
//     }
//     return tree[pos];
// }
// int main()
// {
//     cin >> n;
//     int k;
//     arr.resize(n);
//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> k;
//         arr[i] = k;
//     }
//     k = pow(2, ceil(log2(2 * n - 1)));
//     tree.resize(k);
//     mintree.assign(k, INT_MAX);
//     lazy.resize(k);
//     int s = construct(0, n - 1, 0); //o(n)
//     s = constructmin(0, n - 1, 0);
//     int a, b;
//     int q = 1;
//     int up; // update val
//     while (q)
//     {
//         cin >> q;
//         if (q == 1)
//         {
//             cout << "range sum: \n";
//             cin >> a >> b;
//             cout << sum(a, b, 0, n - 1, 0); // sum query
//         }
//         if (q == 2) // point update
//         {
//             cout << "index, val :\n";
//             cin >> k >> up;
//             arr[k] += up;               // updating val
//             update(up, k, 0, n - 1, 0); // update tree sum,mini ranges
//         }
//         if (q == 3)
//         {
//             cout << "range min: \n";
//             cin >> a >> b;
//             cout << mini(0, n - 1, a, b, 0);
//         }
//         if (q == 4) //range update-lazy propogation
//         {
//             cout << " change all elements b/w a,b by k\n";
//             cin >> a >> b >> k;
//             s = rangeupdate(0, n - 1, a, b, k, 0);
//         }
//         cout << "\n";
//     }
// }

// TERNARY SEARCH

// int f(int x) // function
// {
// 	return abs(x);
// }
// int ternary(int l,int r) // finding min in this case
// {
// 	int a=(2*l+r)/3;
// 	int b=(2*r+l)/3;
// 	if(r-l<=3)
// 	{
// 		return min(min(f(a),f(b)),min(f(l),f(r)));
// 	}
// 	if(f(a)<f(b))
// 	{
// 		return ternary(l,b);
// 	}
// 	else if(f(b)<f(a))
// 	{
// 		return ternary(a,r);
// 	}
// 	else
// 	{
// 		return ternary(a,b);
// 	}
// }
// int main()
// {
// 	// unimodal seq for f(x)=abs(x) find min b/w -7 and 7
// 	cout<<ternary(-7,7);
// }

// 2 SAT problem

// vector<int> cost;
// unordered_map<int, vector<int>> adj;
// unordered_map<int, vector<int>> rev;
// int t, n, m, x, y;
// vector<int> order;
// unordered_map<int, bool> used;
// unordered_map<int, int> comp;
// string s;

// void dfs1(int v)
// {
// 	used[v] = true;
// 	for (int i = 0; i < rev[v].size(); ++i)
// 	{
// 		if (!used[rev[v][i]])
// 			dfs1(rev[v][i]);
// 	}
// 	order.push_back(v);
// }
// int l = 1;
// void dfs2(int v)
// {
// 	used[v] = true;
// 	comp[v] = l;
// 	for (size_t i = 0; i < adj[v].size(); ++i)
// 	{
// 		if (!used[adj[v][i]])
// 		{
// 			dfs2(adj[v][i]);
// 		}
// 	}
// }

// bool kosaraju()
// {
// 	for (int i = -n; i <= n; ++i)
// 	{
// 		if (i == 0)
// 		{
// 			continue;
// 		}
// 		if (!used[i])
// 		{
// 			dfs1(i);
// 		}
// 	}
// 	used.clear();
// 	for (int i = 0; i < n; ++i)
// 	{
// 		int v = order[n - 1 - i];
// 		if (!used[v])
// 		{
// 			dfs2(v);
// 		}
// 		++l;
// 	}
// 	for (int i = 1; i <= n; ++i)
// 	{
// 		if (i == 0)
// 		{
// 			continue;
// 		}
// 		if (comp[i] == comp[-i])
// 		{
// 			return 0;
// 		}
// 	}
// 	return 1;
// }

// int main()
// {
// 	cin >> n >> m;
// 	cin >> s;
// 	cost.resize(n);
// 	for (int j = 0; j < n; ++j)
// 	{
// 		cin >> x;
// 		cost[j] = x;
// 	}
// 	for (int j = 0; j < m; ++j)
// 	{
// 		cin >> x >> y;
// 		if (x > 0 && y > 0) // x or y
// 		{
// 			adj[-x].push_back(y); // negative->positve
// 			adj[-y].push_back(x);
// 			rev[y].push_back(-x);
// 			rev[x].push_back(-y);
// 		}
// 		else if (x > 0 && y < 0) // x or !y
// 		{
// 			adj[-x].push_back(y); // negative->negative
// 			adj[-y].push_back(x); //  positive->positive
// 			rev[y].push_back(-x);
// 			rev[x].push_back(-y);
// 		}
// 		else if (x < 0 && y > 0) // !x or y
// 		{
// 			adj[-x].push_back(y); // positive->positive
// 			adj[-y].push_back(x); // negative->negative
// 			rev[y].push_back(-x);
// 			rev[x].push_back(-y);
// 		}
// 		else if (x < 0 && y < 0) // !x or !y
// 		{
// 			adj[-x].push_back(y); // positive->negative
// 			adj[-y].push_back(x);
// 			rev[y].push_back(-x);
// 			rev[x].push_back(-y);
// 		}
// 	}
// 	cout << kosaraju() << "\n";
// }

// AVL TREE

// struct node
// {
//     int data;
//     node *left;
//     node *right;
//     node *par;
//     int bf;
//     int ht;
// };
// node *getnewnode(int y)
// {
//     node *n = new node();
//     n->left = NULL;
//     n->right = NULL;
//     n->data = y;
//     n->bf = 0;
//     n->ht = 0;
//     n->par = NULL;
//     return n;
// }
// node *update(node *root)
// {
//     if (root == NULL)
//     {
//         return root;
//     }
//     int htl, htr;
//     if (root->left == NULL)
//     {
//         htl = -1;
//     }
//     else
//     {
//         htl = root->left->ht;
//     }
//     if (root->right == NULL)
//     {
//         htr = -1;
//     }
//     else
//     {
//         htr = root->right->ht;
//     }
//     root->ht = max(htl, htr) + 1;
//     root->bf = htr - htl;
//     return root;
// }

// node *rightrotate(node *root)
// {
//     node *temp = root->left;
//     root->left = temp->right;
//     if (root->left != NULL)
//     {
//         root->left->par = root;
//     }
//     if (root->par != NULL)
//     {
//         if (root->par->left == root)
//         {
//             root->par->left = temp;
//         }
//         else
//         {
//             root->par->right = temp;
//         }
//     }
//     temp->par = root->par;
//     root->par = temp;
//     temp->right = root;
//     update(root);
//     update(temp);
//     return temp;
// }
// node *leftrotate(node *root)
// {
//     node *temp = root->right;
//     root->right = temp->left;
//     if (root->right != NULL)
//     {
//         root->right->par = root;
//     }
//     if (root->par != NULL)
//     {
//         if (root->par->left == root)
//         {
//             root->par->left = temp;
//         }
//         else
//         {
//             root->par->right = temp;
//         }
//     }
//     temp->par = root->par;
//     root->par = temp;
//     temp->left = root;
//     update(root);
//     update(temp);
//     return temp;
// }

// node *balance(node *root)
// {
//     if(root==NULL)
//     {
//         return root;
//     }
//     if (root->bf == -2)
//     {
//         if (root->left->bf == 1) // left right case
//         {
//             root->left = leftrotate(root->left);
//         }
//         root = rightrotate(root);
//     }
//     else if (root->bf == 2)
//     {
//         if (root->right->bf == -1) // right left case
//         {
//             root->right = rightrotate(root->right);
//         }
//         root = leftrotate(root);
//     }
//     return root;
// }
// node *insert(int x, node *root)
// {
//     if (root == NULL)
//     {
//         root = getnewnode(x);
//     }
//     else if (x > root->data)
//     {
//         root->right = insert(x, root->right);
//         if (root->right != NULL)
//         {
//             root->right->par = root;
//         }
//     }
//     else
//     {
//         root->left = insert(x, root->left);
//         if (root->left != NULL)
//         {
//             root->left->par = root;
//         }
//     }
//     root = update(root);
//     return balance(root);
// }
// bool search(int x, node *root)
// {
//     if (root == NULL)
//     {
//         return false;
//     }
//     else if (root->data == x)
//     {
//         return true;
//     }
//     else if (root->data > x)
//     {
//         return search(x, root->left);
//     }
//     else
//     {
//         return search(x, root->right);
//     }
// }
// node *findpredecessor(node *r)
// {
//     r = r->left;
//     while (r->right != NULL)
//     {
//         r = r->right;
//     }
//     return r;
// }
// node *del(node *root, int x)
// {
//     if (root->data > x)
//     {
//         root->left = del(root->left, x);
//     }
//     else if (root->data < x)
//     {
//         root->right = del(root->right, x);
//     }
//     else
//     {
//         if (root->left == NULL && root->right == NULL)
//         {
//             delete root;
//             root = NULL;
//         }
//         else if (root->left != NULL && root->right == NULL)
//         {
//             node *t = root;
//             root->left->par = root->par;
//             root = root->left;
//             t = NULL;
//             delete t;
//         }
//         else if (root->right != NULL && root->left == NULL)
//         {
//             node *t = root;
//             root->right->par = root->par;
//             root = root->right;
//             t = NULL;
//             delete t;
//         }
//         else
//         {
//             node *pre = findpredecessor(root);
//             root->data = pre->data;
//             root->left = del(root->left, pre->data); // delete predecessor node
//         }
//     }
//     root=update(root);
//     return balance(root);
// }
// void preorder(node *root)
// {
//     if (root != NULL)
//     {
//         cout << root->data << " ";
//         preorder(root->left);
//         preorder(root->right);
//     }
// }

// int main()
// {
//     node *root = NULL;
//     root = insert(10, root);
//     root = insert(20, root);
//     root = insert(30, root);
//     root = insert(40, root);
//     root = insert(50, root);
//     root = insert(25, root);

//     /* The constructed AVL Tree would be
//                 30
//             / \  
//             20 40
//             / \ \  
//         10 25 50
//     */
//     preorder(root);
//     root = insert(55, root);
//     root = insert(0, root);
//     root = insert(23, root);
//     cout<<endl;
//     preorder(root);
//     cout<<endl;
//     root = del(root, 55);
//     root = del(root, 0);
//     root = del(root, 23);
//     preorder(root);
//     return 0;
// }
