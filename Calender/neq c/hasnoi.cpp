
	include <stdio.h>

	#define MAX 50

	void insert();
    void delete();
	void display();
.	int queue_array[MAX];
	int rear = - 1;
.	int front = - 1;
1main()
12.	{
13.	    int choice;
14.	    while (1)
15.	    {
16.	        printf("1.Insert element to queue \n");
17.	        printf("2.Delete element from queue \n");
18.	        printf("3.Display all elements of queue \n");
19.	        printf("4.Quit \n");
20.	        printf("Enter your choice : ");
21.	        scanf("%d", &choice);
22.	        switch (choice)
23.	        {
24.	            case 1:
25.	            insert();
26.	            break;
27.	            case 2:
28.	            delete();
29.	            break;
30.	            case 3:
31.	            display();
32.	            break;
33.	            case 4:
34.	            exit(1);
35.	            default:
36.	            printf("Wrong choice \n");
37.	        } /* End of switch */
38.	    } /* End of while */
39.	} /* End of main() */
40.	 
41.	void insert()
42.	{
43.	    int add_item;
44.	    if (rear == MAX - 1)
45.	    printf("Queue Overflow \n");
46.	    else
47.	    {
48.	        if (front == - 1)
49.	        /*If queue is initially empty */
50.	        front = 0;
51.	        printf("Inset the element in queue : ");
52.	        scanf("%d", &add_item);
53.	        rear = rear + 1;
54.	        queue_array[rear] = add_item;
55.	    }
56.	} /* End of insert() */
57.	 
58.	void delete()
59.	{
60.	    if (front == - 1 || front > rear)
61.	    {
62.	        printf("Queue Underflow \n");
63.	        return ;
64.	    }
65.	    else
66.	    {
67.	        printf("Element deleted from queue is : %d\n", queue_array[front]);
68.	        front = front + 1;
69.	    }
70.	} /* End of delete() */
71.	 
72.	void display()
73.	{
74.	    int i;
75.	    if (front == - 1)
76.	        printf("Queue is empty \n");
77.	    else
78.	    {
79.	        printf("Queue is : \n");
80.	        for (i = front; i <= rear; i++)
81.	            printf("%d ", queue_array[i]);
.	        printf("\n");
83.	    }
