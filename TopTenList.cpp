//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

TopTenList::TopTenList()
{
  _list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
  _list.at(index - 1) = link;
}

Hyperlink TopTenList::get(int index)
{
 return _list.at(index - 1);
}

void TopTenList::display_forward() {
  for (int i = 1; i <= 10; i++) {
      string text = get(i).text;
      string url = get(i).url;
      
      cout << i << ". <a href=\"" << url << "\">" << text << "/a>" << endl;
  }
}

//2
void TopTenList::display_backward() {
  for (int i = 10; i >= 1; i--) {
      string text = get(i).text;
      string url = get(i).url;
      
      cout << i << ". <a href=\"" << url << "\">" << text << "/a>" << endl;
  }
}
