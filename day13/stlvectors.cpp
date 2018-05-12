#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	//Create inventory of itens
	vector<string> inventory;

	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	cout<<"You have "<<inventory.size() <<"itens \n";

	cout<<"\n Your itens:\n";
	for (int i=0; i<inventory.size(); i++)
	{
		cout<<inventory[i]<<"\n";
	}

	//Replace first item
	inventory[0] = "axe";
	//Remove last item added
	inventory.pop_back();
	//Clear all itens
	inventory.clear();

	if(inventory.empty())
	{
		cout<<"You don't have any itens \n";
	}
	else
	{
		cout<<"You have at least one item \n";
	}

	return 0;
}