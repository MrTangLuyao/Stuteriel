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
	cout << "�鼮�������ǣ�" << bk.bookName << endl;
	cout << "�鼮�������ǣ�" << bk.bookOwner << endl;
	if (bk.bookCode == "0") {
		cout << "�鼮û����дISBN����ISSN" << endl;
	}
	else
	{
		cout << "�鼮��ISBN����ISSN�ǣ�" << bk.bookCode << endl;
	}
	if (bk.otherDetails == "0") {
		cout << "�鼮û����д��ע" << endl;
	}
	else
	{
		cout << "�Ȿ��ı�ע��" << bk.otherDetails << endl;
	}
}

void showMenu()
{
	cout << "***************************" << endl
		<< "*** 1.�½�ͼ�� ************" << endl
		<< "*** 2.�½�ͼ��軹��¼ ****" << endl
		<< "*** 3.��ʾͼ���¼ ********" << endl
		<< "*** 4.ɾ��ĳ��ͼ�� ********" << endl
		<< "*** 5.����ĳ��ͼ�� ********" << endl
		<< "*** 6.�޸�ͼ����Ϣ ********" << endl
		<< "*** 7.!!����!!���ȫ����Ϣ*" << endl
		<< "*** 0.�˳�ͼ�����ϵͳ ****" << endl
		<< "***************************" << endl;
}

void addBook(bookList* blp) {//����鼮
	if (blp->size == MAX) {
		cout << "�鼮�б�ﵽ���ߣ��޷����!!(err:MAX==1000)";
		return;
	}
	else
	{
		//bookname
		string name;
		cout << "�������鼮������" << endl;
		cin >> name;
		blp->bookArray[blp->size].bookName = name;
		//bookowner
		string owner;
		cout << "�������������" << endl;
		cin >> owner;
		blp->bookArray[blp->size].bookOwner = owner;
		//bookISSN
		string bookCode;
		cout << "���������ISBN����ISSN��ţ�û������д0" << endl;
		cin >> bookCode;
		blp->bookArray[blp->size].bookCode = bookCode;
		//bookDetails
		string others;
		cout << "����ʲôҪ�����ô��û��������0" << endl;
		cin >> others;
		blp->bookArray[blp->size].otherDetails = others;
		cout << "OK,лл" << blp->bookArray[blp->size].bookName << "�Ѿ���ӳɹ���*^____^*" << endl;
		system("pause");
		system("cls");
		cout << "��һ�β���������鼮\"" << blp->bookArray[blp->size].bookName << "\"" << endl;
		blp->size++;
	}
}

void showBookList(bookList* blp) {
	if (blp->size == 0) {
		cout << "�Բ����鼮�б���û���κ��鼮(err:blp->size == 0),����Ŀ�İ������ⰴ���᷵�ز˵�" << endl;
	}
	else
	{
		cout << "�鼮�б��е��鼮���£�" << "һ��" << blp->size << "�����м�¼" << endl;
		for (int i = 0; i < blp->size; i++) {
			cout << "�����ǵ� " << i + 1 << " ���������" << endl;
			printBook(blp->bookArray[i]);
		}
		cout << "ȫ���鼮��ʾ��ɣ�����Ŀ�İ������ⰴ���᷵�ز˵������ɾ��" << endl;
	}
}

void showBookListEnd() {
	system("pause");
	system("cls");
	cout << "��һ�β�������ʾ�鼮" << endl;
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
	cout << "ɾ��ǰȷ��" << endl << "����ɾ�����鼮���ֽ���" << bkn << endl << "ȷ��ɾ��������y����yes�����ȡ��ɾ��" << endl;
	string confirm;
	cin >> confirm;
	if (confirm == "y" || confirm == "Y" || confirm == "yes" || confirm == "Yes" || confirm == "YES") {
		for (int i = val; i < blp->size; i++) {
			blp->bookArray[i] = blp->bookArray[i + 1];//����ǰ��
		}
		blp->size--;//�����鼮��
		cout << "ɾ�����" << endl;
		system("pause");
		system("cls");
		cout << "��һ�β�����ɾ���鼮" << endl;
	}
	else
	{
		cout << "��ܾ���ɾ�����������ⰴ���ص���ҳ err:refuse confirm" << endl;
		system("pause");
		system("cls");
		cout << "��һ�β�����ɾ���鼮������ɾ�������б��ܾ�" << endl;
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
			cout << "ϵͳ�Ѿ��˳�����ӭ�´�ʹ��" << endl;
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
			cout << "�������鼮���ƣ�����޷��ж��鼮���ƿ�������lookup�������ģʽ" << endl;
			string bkn;
		inputBkn:
			cin >> bkn;
			if (bkn == "lookup") {
				showBookList(&bl);
				cout << "lookupģʽִ����ɣ�����������" << endl;
				goto inputBkn;
			}
			int detectval = detect(&bl, bkn);
			if (detectval == -1) {
				cout << "���޴��飬�޷�ɾ�����������ⰴ���᷵����ҳ err:detect(&bl)==0" << endl;
				system("pause");
				system("cls");
				cout << "��һ�β�����ɾ���鼮�����ǲ��޴���" << endl;
			}
			else {
				deleteBook(&bl, bkn, detectval);
			}
		}
			  break;
		case 5: // lookup book
			if (bl.size == 0) {
				cout << "�б���û���鼮��û�а취ʹ��������� err:bl.size==0" << endl;
				cout << "���������ַ�������ҳ" << endl;
				system("pause");
				system("cls");
				cout << "��һ�β����ǲ����鼮������û���б���û���鼮" << endl;
			}
			else
			{
				cout << "��Ҫ����ʲô��?" << endl;
				string lookupVal;
				cin >> lookupVal;
				int valIndex = detect(&bl, lookupVal);
				if (valIndex == -1) {
					cout << "���޴��� err:valIndex==-1" << endl;
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
			cout << "����һ���ǳ�Σ�յľ�����ȷ��Ҫ��ô��ô\n����yesiagree(Сд)����" << endl;
			string vary;
			cin >> vary;
			if (vary == "yesiagree") {
				book* newBookList = new book[MAX];
				memcpy(&bl.bookArray, newBookList, MAX);
				bl.size = 0;
				delete[]newBookList;
				cout << "�����鼮����ɾ�����" << endl;
				system("pause");
				system("cls");
				cout << "��һ�εĲ����ǣ�ɾ��ȫ���鼮����" << endl;
			}
			break;
		}

		default: // N/A
			cout << "�������˷Ƿ����ݣ��������ⰴ����ص���ҳ" << endl;
			break;
		}
	}

	cout << "CODING NOT FINISH" << endl;
}