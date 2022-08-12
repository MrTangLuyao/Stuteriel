#include <iostream>
#include <cstdlib>
using namespace std;

#include <string>
#define MAX 1000

struct book
{
	string bookName;
	string bookOwner;
	string bookCode;
	string otherDetails;
};

struct bookList
{
	book bookArray[MAX];
	int size{};
};

void printBook(book bk) {
	cout << "书籍的名字是：" << bk.bookName << endl;
	cout << "书籍的主人是：" << bk.bookOwner << endl;
	if (bk.bookCode == "0") {
		cout << "书籍没有填写ISBN或者ISSN" << endl;
	}
	else
	{
		cout << "书籍的ISBN或者ISSN是：" << bk.bookCode << endl;
	}
	if (bk.otherDetails == "0") {
		cout << "书籍没有填写备注" << endl;
	}
	else
	{
		cout << "这本书的备注：" << bk.otherDetails << endl;
	}
}

void showMenu()
{
	cout << "***************************" << endl
		<< "*** 1.新建图书 ************" << endl
		<< "*** 2.新建图书借还记录 ****" << endl
		<< "*** 3.显示图书记录 ********" << endl
		<< "*** 4.删除某个图书 ********" << endl
		<< "*** 5.查找某个图书 ********" << endl
		<< "*** 6.修改图书信息 ********" << endl
		<< "*** 7.!!慎用!!清空全部信息*" << endl
		<< "*** 0.退出图书管理系统 ****" << endl
		<< "***************************" << endl;
}

void addBook(bookList* blp) {//添加书籍
	if (blp->size == MAX) {
		cout << "书籍列表达到上线，无法添加!!(err:MAX==1000)";
		return;
	}
	else
	{
		//bookname
		string name;
		cout << "请输入书籍的名称" << endl;
		cin >> name;
		blp->bookArray[blp->size].bookName = name;
		//bookowner
		string owner;
		cout << "请输入书的主人" << endl;
		cin >> owner;
		blp->bookArray[blp->size].bookOwner = owner;
		//bookISSN
		string bookCode;
		cout << "请输入书的ISBN或者ISSN编号，没有请填写0" << endl;
		cin >> bookCode;
		blp->bookArray[blp->size].bookCode = bookCode;
		//bookDetails
		string others;
		cout << "还有什么要补充的么？没有请输入0" << endl;
		cin >> others;
		blp->bookArray[blp->size].otherDetails = others;
		cout << "OK,谢谢" << blp->bookArray[blp->size].bookName << "已经添加成功啦*^____^*" << endl;
		system("pause");
		system("cls");
		cout << "上一次操作是添加书籍\"" << blp->bookArray[blp->size].bookName << "\"" << endl;
		blp->size++;
	}
}

void showBookList(bookList* blp) {
	if (blp->size == 0) {
		cout << "对不起，书籍列表中没有任何书籍(err:blp->size == 0),根据目的按下任意按键会返回菜单" << endl;
	}
	else
	{
		cout << "书籍列表中的书籍如下：" << "一共" << blp->size << "本书有记录" << endl;
		for (int i = 0; i < blp->size; i++) {
			cout << "以下是第 " << i + 1 << " 本书的内容" << endl;
			printBook(blp->bookArray[i]);
		}
		cout << "全部书籍显示完成，根据目的按下任意按键会返回菜单或继续删除" << endl;
	}
}

void showBookListEnd() {
	system("pause");
	system("cls");
	cout << "上一次操作是显示书籍" << endl;
}

int detect(bookList* blp, string bkn) {
	for (int i = 0; i < blp->size; i++) {
		if (blp->bookArray[i].bookName == bkn) {
			return i;
		}
	}
	return -1;
}

void deleteBook(bookList* blp, string bkn, int val) {
	cout << "删除前确认" << endl << "你想删除的书籍名字叫做" << bkn << endl << "确认删除请输入y或者yes否则会取消删除" << endl;
	string confirm;
	cin >> confirm;
	if (confirm == "y" || confirm == "Y" || confirm == "yes" || confirm == "Yes" || confirm == "YES") {
		for (int i = val; i < blp->size; i++) {
			blp->bookArray[i] = blp->bookArray[i + 1];//数据前移
		}
		blp->size--;//更新书籍数
		cout << "删除完成" << endl;
		system("pause");
		system("cls");
		cout << "上一次操作是删除书籍" << endl;
	}
	else
	{
		cout << "你拒绝了删除，按下任意按键回到主页 err:refuse confirm" << endl;
		system("pause");
		system("cls");
		cout << "上一次操作是删除书籍，但是删除过程中被拒绝" << endl;
	}
}

int main()
{
	int select = 99;
	bookList bl;
	//initialize bl
	bl.size = 0;
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 0: // exit
			cout << "系统已经退出，欢迎下次使用" << endl;
			system("break");
			return 0;
			break;
		case 1: // new book
			addBook(&bl);
			break;
		case 2: // borrow & lendw
			break;
		case 3: // show book record
			showBookList(&bl);
			showBookListEnd();
			break;
		case 4: {// delete book
			cout << "请输入书籍名称，如果无法判断书籍名称可以输入lookup进入查找模式" << endl;
			string bkn;
		inputBkn:
			cin >> bkn;
			if (bkn == "lookup") {
				showBookList(&bl);
				cout << "lookup模式执行完成，请输入书名" << endl;
				goto inputBkn;
			}
			int detectval = detect(&bl, bkn);
			if (detectval == -1) {
				cout << "查无此书，无法删除，按下任意按键会返回首页 err:detect(&bl)==0" << endl;
				system("pause");
				system("cls");
				cout << "上一次操作是删除书籍，但是查无此书" << endl;
			}
			else {
				deleteBook(&bl, bkn, detectval);
			}
		}
			  break;
		case 5: // lookup book
			if (bl.size == 0) {
				cout << "列表中没有书籍，没有办法使用这个功能 err:bl.size==0" << endl;
				cout << "输入任意字符返回首页" << endl;
				system("pause");
				system("cls");
				cout << "上一次操作是查找书籍，但是没有列表中没有书籍" << endl;
			}
			else
			{
				cout << "你要查找什么书?" << endl;
				string lookupVal;
				cin >> lookupVal;
				int valIndex = detect(&bl, lookupVal);
				if (valIndex == -1) {
					cout << "查无此书 err:valIndex==-1" << endl;
				}
				else
				{
					printBook(bl.bookArray[valIndex]);
				}
			}
			break;
		case 6: // edit book
			break;
		case 7: /*delete all*/ {
			cout << "这是一个非常危险的决定，确认要这么做么\n输入yesiagree(小写)继续" << endl;
			string vary;
			cin >> vary;
			if (vary == "yesiagree") {
				book* newBookList = new book[MAX];
				memcpy(&bl.bookArray, newBookList, MAX);
				bl.size = 0;
				delete[]newBookList;
				cout << "所有书籍数据删除完成" << endl;
				system("pause");
				system("cls");
				cout << "上一次的操作是：删除全部书籍数据" << endl;
			}
			break;
		}

		default: // N/A
			cout << "你输入了非法内容，按下任意按键会回到主页" << endl;
			break;
		}
	}

	cout << "CODING NOT FINISH" << endl;
}