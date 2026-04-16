class Queue():
    def __init__(self,k):
        self.k = k
        self.queue = [None]*k
        self.head = self.tail = -1
    def enqueue(self, n):
        if (self.tail == self.k-1):
            print("The queue is full so dont try to insert an element")
        elif (self.head == -1):
            self.head = 0
            self.tail = 0
            self.queue[self.tail] = n
        else:
            self.tail = self.tail+1 
            self.queue[self.tail] = n
    def dequeue(self):
        if (self.head == -1 and self.tail == -1):
            print("There is nothing to remove")
        elif(self.head == self.tail):
            self.head = -1
            self.tail = -1
        else:
            element = self.queue[self.head]
            self.head+=1 
            return element
    def printQueue(self):
        if self.head == -1 and self.tail == -1:
            print("There is nothing to print")
            return
        for i in range(self.head,self.tail+1):
            print(self.queue[i],end=" ")

        print()

queue = Queue(5)
queue.enqueue(10)
queue.enqueue(20)
queue.enqueue(30)
queue.enqueue(40)
queue.enqueue(50)
queue.printQueue()
queue.dequeue()
queue.printQueue()
