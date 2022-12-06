#include "date.h"
#include <iostream>
#include "book.h"

int main(int argc, char const *argv[]) {
 /* Date a_day(7,31,2022);
  std::cout << "a day: " << toString(a_day) << std::endl;
  std::cout << "#day: " << dayOfYear(a_day) << std::endl;
  a_day.next();
  std::cout << "a day + 1: " << toString(a_day) << std::endl;
  std::cout << "#day: " << dayOfYear(a_day) << std::endl;
*/
 Book my_book("the journey","jack Ma","english","discovery",Date(4,14,1998),"123456789011",{"jaja","juju"});
 my_book.getList();
 std::cout << my_book.getAuthor() <<std::endl;
 std::cout << my_book.getTitle() <<std::endl;
 std::cout << my_book.getLanguage() <<std::endl;
 std::cout << my_book.getISBN() <<std::endl;
 
  return 0;
}
