  public calss linkedll{
   public static class linkedlist{
        public class Node{
            int data=0;
            Node next=null;
    
            public Node(int data){
                this.data=data;
            }
        }

        Node head=null;
        Node tail=null;
        int size=0;

        //generalUtil.==================================================

        public int size(){
            return this.size;
        }

        public boolean isEmpty(){
            return size==0;
        }

        @Override
        public String toString(){
            Node curr=this.head;
            String str="";
            while(curr!=null){
                str+=(curr.data + " -> ");
                curr=curr.next;
            }
            return str;
        }

        public Node getNodeAt(int pos){
            Node curr=this.head;
            while(pos-- > 0){
                curr=curr.next;
            }
            return curr;
        }

        //Add_Function.===================================================

        private void addFirstNode(Node node){
            if(this.size==0){
                this.tail=node;
                this.head=node;
            }else{
                node.next=this.head;
                this.head=node;
            }
            this.size++;
        }

        public void addFirst(int data){
            Node node=new Node(data);
            addFirstNode(node);
        }

        private void addLastNode(Node node){
            if(this.size==0){
                this.tail=node;
                this.head=node;
            }else{
                tail.next=node;
                this.tail=node;
            }
            this.size++;
        }

        public void addLast(int data){
            Node node=new Node(data);
            addLastNode(node);
        }


        private void addAtNode(Node node,int pos){
           
            if(pos-1==this.size-1)
            {
                addLast(node);
            }

            else if(pos==0)
            {
                addFirst(node);
            }
            else{
             Node nn=getNodeAt(pos-1);
             int ne=nn.next;
             nn.next=node;
             node.next=ne;
            }

         
        }

        public void addAt(int data,int pos){
            Node node=new Node(data);
            addAtNode(node,pos);
        }


        //remove_Function.===================================================

        public int removeFirst(){
            if(this.size==0){
                System.out.println("EmptyList!")
                return -1;
            }

            Node rnode=this.head;

            if(this.size==1){
                this.head=null;
                this.tail=null;
            }else{
                this.head=this.head.next;
                rnode.next=null;
            }

            this.size--;
            return rnode.data;   // delete rnode; 
        }
        
        public int removeLast(){
            if(this.size==0){
                System.out.println("EmptyList!")
                return -1;
            }

            Node rnode=this.tail;
            if(this.size==1){
                this.head=null;
                this.tail=null;
            }else{
                Node secondLastNode=getNodeAt(this.size()-2);
                secondLastNode.next=null;
                this.tail=secondLastNode;
            }

            this.size--;
            return rnode.data; 
        }

        public int removeAt(int pos){
            if(pos<0 || pos> this.size)
            {
                System.out.println("NULLPtr");
                return -1;
            }
            if(pos==0)
            {
                removeFirst();
            }
            else if(pos==this.size-1)
            {
                removeLast();
            }
            for(int i=0;i<pos;i++)
            {
                curr=curr.next;
            }
            int n=curr.next.data;
            curr.next=curr.next.next;
            return curr.next;
        }


        //get_Function.======================================================
        
        public int getFirst(){
            if(this.size==0){
                System.out.println("EmptyList!")
                return -1;
            }
            return this.head.data;  
        }

        public int getLast(){
            if(this.size==0){
                System.out.println("EmptyList!")
                return -1;
            }
            return this.tail.data;  
        }

        public int getAt(int pos){
            if(pos>=this.size || pos < 0){
                System.out.println("NullPointException!")
                return -1;
            }
              Node curr=this.head;
              while(pos-->0)
              {
                  curr=curr.next;
              }
            return curr.data;  
        }

    }

    public static void main(String[] args){
        linkedlist ll=new linkedlist();
        for(int i=1;i<10;i++){
            ll.addFirst(i*10);
        }
        for(int i=1;i<10;i++){
            ll.addLast(i*10);
        }
        System.out.println(ll);

    }
    
  } 
