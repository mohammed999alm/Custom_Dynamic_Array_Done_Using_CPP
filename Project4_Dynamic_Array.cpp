#include <iostream>
#include "clsMyDynamicArray.h"
using namespace std;


//int add(int a, int b) 
//{
//	return a + b;
//}
//
//int multiply(int a, int b)
//{
//	return a * b;
//}
//
//int addP(void* a, void* b)
//{
//	//return static_cast<int*>(int) + *b;
//
//	int *ptr = static_cast<int*>(a);
//	int *ptr2 = static_cast<int*>(b);
//
//	return *ptr + *ptr2;
//}
//
//int multiplyP(int *a, int *b)
//{
//	return *a * *b;
//}

int main()
{

	//int (*operation)(int, int);

	//operation = &add;


	//int (*list[6])(int*, int*);

	//int (*list1[6])(void*, void*);

	//list1[0] = addP;
	//list1[1] = addP;
	//list1[2] = addP;
	//list1[3] = addP;
	//list1[4] = addP;
	//list1[5] = addP;




	//int x = 10,  y = 100;

	//

	//int array[6];

	////int* ptr0 = array;

	//for (int i = 0; i < 6; i++)
	//{
	//	//cout << list1[i](&x, &y) << endl << endl;
	//	*(array + i) = list1[i](&x, &y) * i;	
	//}

	//
	//for (int i = 0; i < 6; i++) 
	//{
	//	
	//	cout << *(array + i) << endl;
	//}


	//return 0;

	//int result1 = list[0](&x, &y);
	//
	//cout << result1 << endl;
	//cout << operation(10, 10) << endl;

	//operation = &multiply;

	//cout << operation(10, 10) << endl;

	//cout << *operation << endl;



	//return 0;

	//int a = 10;

	//int* ptr = &a;

	//int** ptr2 = &ptr;

	//int*** ptr3 = &ptr2;

	//int**** ptr4 = &ptr3;

	//****ptr4 = 1000;


	//cout << "a = " << a << endl;
	//cout << "*ptr = " << *ptr << endl;
	//cout << "**ptr = " << **ptr2 << endl;
	//cout << "***ptr = " << ***ptr3 << endl;
	//cout << "****ptr = " << ****ptr4 << endl;
	//cout << "*ptr = " << *ptr << endl;








	
	clsMyDynamicArray<int> arr(10);


	/*arr.setItem(0, 10);
	arr.setItem(0, 40);
	arr.setItem(9, 30);
	arr.setItem(4, 50);
	arr.setItem(6, 60);

	cout << "Is Empty Array ? :  " << arr.isEmpty() << endl;
	cout << "Array Size     ? : " << arr.size() << endl;
	cout << "Array Items : \n\n";
	arr.printList("\n\n");

	cout << "re size the array to 2 :  \n\n";
	arr.reSize(2);

	arr.printList("\n\n");*/



	arr.setItem(0, 10);
	arr.setItem(1, 20);
	arr.setItem(2, 30);
	arr.setItem(3, 40);
	arr.setItem(4, 50);
	arr.setItem(5, 60);
	arr.setItem(6, 70);
	arr.setItem(7, 80);
	arr.setItem(8, 90);
	arr.setItem(9, 100);



	cout << "Array Size     ? : " << arr.size() << endl;
	cout << "Array Items : \n\n";
	arr.printList("\n\n");



	arr.insertAtBeginning(5);

	cout << "Array After Insert 5 At Beginning :  \n\n";
	cout << "Array Size     ? : " << arr.size() << endl << endl;

	arr.printList("\n\n");


	arr.insertAfter(1, 15);

	cout << "Array After Insert 15 After Index 1 :  \n\n";
	cout << "Array Size     ? : " << arr.size() << endl << endl;

	arr.printList("\n\n");

	arr.insertBefore(4, 25);

	cout << "Array After Insert 25 Before Index 4 :  \n\n";
	cout << "Array Size     ? : " << arr.size() << endl << endl;

	arr.printList("\n\n");

	arr.insertAtEnd(110);

	cout << "Array After Insert 110 At End :  \n\n";
	cout << "Array Size     ? : " << arr.size() << endl << endl;

	arr.printList("\n\n");

	arr.insertAfter(13, 15);

	cout << "Array After Insert 15 After Index 14 :  \n\n";
	cout << "Array Size     ? : " << arr.size() << endl << endl;

	arr.printList("\n\n");

	arr.insertBefore(0, 25);

	cout << "Array After Insert 25 Before Index 0 :  \n\n";
	cout << "Array Size     ? : " << arr.size() << endl << endl;

	arr.printList("\n\n");

	system("pause > 0");

	return 0;

	int index = arr.find(40);

	if (index == -1)
	{
		cout << "Item Was Not Found :-( \n\n";
	}
	else
	{
		cout << "40 Is Found At Index : " << index << endl << endl;
	}


	cout << "Array After Deleting 40 : \n\n";

	arr.deleteItem(111);

	cout << "Array Is Empty     ? : " << arr.isEmpty() << endl;
	cout << "Array Size     ? : " << arr.size() << endl << endl;

	cout << "Array Items\n\n";
	arr.printList();

	
	system("pause > 0");

	return 0;


	cout << "Array Size     ? : " << arr.size() << endl;

	cout << "Array Items : \n\n";
	arr.printList("\n\n");

	cout << "Array After Deleting Item 5 : \n\n";


	arr.deleteItemAt(5);

	cout << "Array Size     ? : " << arr.size() << endl;

	arr.printList("\n\n");



	for (int i = arr.size() - 1; i >= 0; i--) 
	{
		cout << "Array After Deleting The Last Item  : \n";

		arr.deleteLastItem();

		cout << "Array Size     ? : \t" << arr.size() << endl;

		arr.printList("\n\n");
	}


	arr.printList("\n\n");

	system("pause > 0");
	return 0;

	cout << "\nArray getItem(5) : " << arr.getItem(5) << endl;
	cout << "\nArray getItem(-1) : " << arr.getItem(-1) << endl;
	cout << "\nArray getItem(10) : " << arr.getItem(10) << endl;
	cout << "\nArray getItem(9) : " << arr.getItem(9) << endl;
	cout << "\nArray getItem(0) : " << arr.getItem(0) << endl;




	cout << "\nArray Items  After Reverse : \n\n";
	arr.reverse();

	arr.printList("\n\n");

	cout << "\nArray Items  After Reverse : \n\n";
	arr.clear();

	arr.printList();

	system("pause > 0");

	return 0;

	cout << "re size the array size  to 5 :  \n\n";
	arr.reSize(5);

	arr.printList("\n\n");

	cout << "re size the array size  to 2 :  \n\n";
	arr.reSize(2);

	arr.printList("\n\n");

	cout << "re size the array size  to 10 :  \n\n";
	arr.reSize(10);

	arr.printList("\n\n");

	arr.originalArray[2] = 30;
	arr.originalArray[3] = 40;
	arr.originalArray[4] = 50;
	arr.originalArray[5] = 60;
	arr.originalArray[6] = 70;
	arr.originalArray[7] = 80;
	arr.originalArray[8] = 90;
	arr.originalArray[9] = 100;

	arr.printList("\n\n");


	cout << "\n____________________________________________________\n";

	clsMyDynamicArray<string> arrString(0);

	cout << "Is Empty Array ? :  " << arrString.isEmpty() << endl;
	cout << "Array Size     ? : " << arrString.size() << endl;
	cout << "Array Items : \n\n";

	arrString.printList("\n\n");




	cout << "\n____________________________________________________\n";

	clsMyDynamicArray<string> arrString1(5);

	arrString1.setItem(0, "Mohammed");
	arrString1.setItem(1, "Ali");
	arrString1.setItem(2, "Aziz");
	arrString1.setItem(3, "Jamil");
	arrString1.setItem(4, "Lamis");


	cout << "Is Empty Array ? :  " << arrString1.isEmpty() << endl;
	cout << "Array Size     ? : " << arrString1.size() << endl;
	cout << "Array Items : \n\n";

	arrString1.printList("\n\n");

	cout << "re size the array size  to 2 :  \n\n";
	arrString1.reSize(2);

	arrString1.printList("\n\n");

	//it will cause an exception you could not grow in size with array of strings in dynamic array.
	//cout << "re size the array size  to 4 :  \n\n";
	//arrString1.reSize(4);

	//arrString1.printList("\n\n");


	system("pause > 0");

	return 0;
} 