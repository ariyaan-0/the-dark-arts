type ListNode<T> = {
    value: T,
    next?: ListNode<T>
}

class LinkedList<T>{
    public length: number;
    private head?: ListNode<T>;
    private tail?: ListNode<T>;

    constructor() {
        this.head = this.tail = undefined;
        this.length = 0;
    }

    add(item: T): void {
        const node = {value: item} as ListNode<T>;
        this.length++;
        if(!this.tail){
            this.tail = this.head = node;
            return;
        }
        this.tail.next = node; //the link up with current tail
        this.tail = node; //updating the tail
    }

    printList(): void{
        let temp = this.head;
        if(!temp) return;
        while(temp.value){
            console.log(temp.value);
            temp = temp?.next;
            if(!temp) return;
        }
    }


}

const myList = new LinkedList();
myList.add(2);
myList.add(4);
myList.add(6);

myList.printList();