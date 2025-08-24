class ListNode{
    public data: number;
    public next: ListNode | null;

    constructor(data: number){
        this.data = data;
        this.next = null; 
    }
}

class LinkedList{
    public head: ListNode | null;
    
    constructor(head){
        this.head = head;
    }

    public print(): void{
        let temp = this.head;
        while(temp!==null){
            console.log(temp.data);
            temp = temp.next; 
        }
    }
}

let nodeOne = new ListNode(5);
let nodeTwo = new ListNode(15);
let nodeThree = new ListNode(12);
let nodeFour = new ListNode(9);
let nodeFive = new ListNode(29);

nodeOne.next = nodeTwo;
nodeTwo.next = nodeThree;
nodeThree.next = nodeFour;
nodeFour.next = nodeFive; 

let linkedList = new LinkedList(nodeOne); 

linkedList.print();