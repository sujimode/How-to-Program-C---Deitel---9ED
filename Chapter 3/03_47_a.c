// (Enforcing Privacy with Cryptography) The explosive growth of Internet com-
// munications and data storage on Internet-connected computers has greatly increased
// privacy concerns. The field of cryptography is concerned with coding data to make it
// difficult (and hopefully—with the most advanced schemes—impossible) for unau-
// thorized users to read. In this exercise, you’ll investigate a simple scheme for encrypt-
// ing and decrypting data. A company that wants to send data over the Internet has
// asked you to write a program that will encrypt it so that it may be transmitted more
// securely. All the data is transmitted as four-digit integers. Your application should
// read a four-digit integer entered by the user and encrypt it as follows: Replace each
// digit with the result of adding 7 to the digit and getting the remainder after dividing
// the new value by 10. Then swap the first digit with the third, and swap the second
// digit with the fourth. Then print the encrypted integer. Write a separate application
// that inputs an encrypted four-digit integer and decrypts it (by reversing the encryption
// scheme) to form the original number. [Optional reading project: In industrial-strength
// applications, you’ll want to use much stronger encryption techniques than presented
// in this exercise. Research “public-key cryptography” in general and the PGP (Pretty
// Good Privacy) specific public-key scheme. You may also want to investigate the RSA
// scheme, which is widely used in industrial-strength applications.]

#include <stdio.h>

int main(void) {
  int number = 0;

  printf("Please, input an integer number: ");
  scanf("%d", &number);

  int a = number / 1000;
  int b = number / 100 % 10;
  int c = number / 10 % 10;
  int d = number % 10;

  printf("%d\t%d\t%d\t%d\tSeparating the numbers.\n", a, b, c, d);


  a += 7;
  b += 7;
  c += 7;
  d += 7;
  
  printf("%d\t%d\t%d\t%d\tAdding 7 to them.\n", a, b, c, d);

  a %=10;
  b %=10;
  c %=10;
  d %=10;

  printf("%d\t%d\t%d\t%d\tGet the remainder of 10.\n", a, b, c, d);

  int tempVar = c;
  c = a;
  a = tempVar;
  tempVar = d;
  d = b;
  b = tempVar;

  printf("%d\t%d\t%d\t%d\tChanging places.\n", a, b, c, d);
}