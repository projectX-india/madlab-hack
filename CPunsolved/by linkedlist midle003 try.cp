#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>


using namespace std;

class Node{
	public:
		int data;
		Node* next;
	Node(int a){
		this->data=a;
		next=NULL;
	}
};

Node* head=NULL;
Node* tail=NULL;
std::unordered_map<int,Node*>arr;
bool con;


int main(){
	int n;
	cin>>n;
	con=false;
	for(int i=0;i<n;i++){
		char ch;
		cin>>ch;
		if(ch=='I'){
			int i;
			cin>>i;
			if(i==0){
				int x;
				cin>>x;
				Node* newN=new Node(x);
				arr[x]=newN;
				if(head==NULL){
					head=newN;
					tail=newN;
				}
				else{
					tail->next=newN;
					tail=tail->next;
				}
			}
			else if(i==1){
				int y,x;
				cin>>y>>x;
				Node* a=head;
				Node* prev=NULL;
				while(a!=NULL){
					if(a->data==y){
						Node* newN=new Node(x);
						arr[x]=newN;
						if(a->next==NULL)
							tail=newN;
						newN->next=a->next;
						a->next=newN;
						break;
					}
					else if(a->data==x){
						Node* newN=new Node(y);
						arr[y]=newN;
						if(prev==NULL)
							head=newN;
							
						else 
							prev->next=newN;
							
						newN->next=a;
						break;
					}
					else{
						prev=a;
						a=a->next;
					}
				}
			}
			else if(i==2){
				int z,y,x;
				cin>>z>>y>>x;
				Node* newN=new Node(x);
				arr[x]=newN;
				Node* a=head;
				while(a->data!=z)
					a=a->next;
				int count=0;
				Node* a2=a;
				while(a2->data!=y){
					a2=a2->next;
					count=count+1;	
				}
				count=(count+1)/2;
				int i=1;
				while(i<count){
					a=a->next;
					i=i+1;
				}
				newN->next=a->next;
				a->next=newN;
			}
		}
		else if(ch=='U'){
			int x,p;
			cin>>x>>p;
			Node* a;
			for(auto start:arr){
				if(start.first==x){
					a=start.second;
					break;
				}
			}
			Node* latest=a;
			Node* prev=NULL;
			int check=0;
			while(a!=NULL){
				if(check==p){
					latest->next=a;
					break;
				}
				check++;
				prev=a;
				a=a->next;
			}
			if(a==NULL){
				con=true;
				prev->next=head;
				a=head;
				while(a!=NULL){
					if(check==p){
						lastest->next=a;
						break;
					}
					check++;
					prev=a;
					a=a->next;
				}
			}
		}
	}
	return 0;
}







struct node{
    int data;
    node* link;
};

bool ischanged=false;

const int mxn=1005;
node* head=nullptr;

int counterforall[mxn]={0};
vector<int> ansvals;
bool isprev[mxn];

void push(int data)
{
    if(head==nullptr)
    {
        node* temp=new node;
        temp->data=data;
        temp->link=nullptr;
        head=temp;
        return;
    }
    node* temp=head;
    while(temp->link!=nullptr)
    {
        temp=temp->link;
    }
    node* temp2=new node;
    temp2->data=data;
    temp2->link=temp->link;
    temp->link=temp2;
}

void weirdinsert(int y ,int x)
{
    node* temp=head;
    bool check=false;
    while(temp!=nullptr)
    {
        if(temp->data==y)
        {check=true;break;}
        temp=temp->link;
    }
    if(check)
    {
        node* temp2=new node;
        temp2->data=x;
        temp2->link=temp->link;
        temp->link=temp2;
        return;
    }
    
    temp=head;
    
    while(temp->link!=nullptr)
    {
        if(temp->link->data==x)
        {check=true;break;}
        temp=temp->link;
    }
    node* temp2=new node;
    temp2->data=y;
    temp2->link=temp->link;
    temp->link=temp2;
}

void insertbwxy(int x, int y, int data)
{
    node* start=nullptr;
    node* endp=nullptr;
    int counter=0;
    
    node* temp=head;
    while(temp!=nullptr)
    {
        if(temp->data==x)
        {
            start=temp;
            break;
        }
        temp=temp->link;
    }
    temp=start;
    while(temp!=nullptr)
    {
        
        if(temp->data==y)
        {
            endp=temp;
            break;
        }
        counter++;
        temp=temp->link;
    }
    int h=counter/=2;
    temp=start;
    for(int i=0;i<h;i++)
    {
        temp=temp->link;
    }
    node* temp2=new node;
    temp2->data=data;
    temp2->link=temp->link;
    temp->link=temp2;
}

void insertafterp(int x, int p)
{
    node* temp=head;
    while(temp!=nullptr)
    {
        if(temp->data==x)
            break;
        temp=temp->link;
    }
    node* temp2=temp;
    while(p--)
    {
        if(temp2->link==nullptr)
        {temp2->link=head;ischanged=true;}
        temp2=temp2->link;
    }
    if(isprev[temp->data])
    {
        counterforall[temp->link->data]--;
    }
        
    isprev[temp->data]=true;
    temp->link=temp2;
    counterforall[temp2->data]++;
}

void display()
{
    node* temp=head;
    if(!ischanged)
    {
        while(temp!=nullptr)
        {cout<<temp->data<<" ";temp=temp->link;}
        cout<<endl;
    }
    else
    {
        temp=head;
        while(temp->link!=head)
        {cout<<temp->data<<" ";temp=temp->link;}
        cout<<endl;
    }
}
    



int main()
{
    int n;
    cin>>n;
    
    char c;
    int x, y, data, ctl;
    while(n--)
    {
        cin>>c;
        if(c=='I')
        {
            cin>>ctl;
            
            if(ctl==0)
            {
                cin>>x;
                push(x);
            }
            else if(ctl==1)
            {
                cin>>y>>x;
                weirdinsert(y, x);
            }
            else if(ctl==2)
            {
                cin>>x>>y>>data;
                insertbwxy(x, y, data);
            }
        }
        else
        {
            cin>>x>>y;
           insertafterp(x, y);
        }
//        display();
    }
    
    if(ischanged)
    {cout<<1<<endl;}
    else
        cout<<0<<endl;
    
    int val=0;
    
    for(int i=1;i<=1000;i++)
    {
        if(counterforall[i]>0)
            ansvals.push_back(i);
    }
    if(ansvals.size()==0)
    {
        cout<<0<<endl;
        display();
    }
    else
    {
        cout<<ansvals.size()<<endl;
        for(auto x:ansvals)
            cout<<x<<" ";
        cout<<endl;
        for(auto x:ansvals)
            cout<<counterforall[x]<<" ";
    }
    
    return 0;
}
