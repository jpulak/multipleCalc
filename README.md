# multipleCalc
General Description:
A vendor at the county fair sells chili dogs for $8.5, corn dogs for $7, chips for $2.5, soft drinks for $4.5, bottles of water for $4.

Write a C++ program with a source file named FairSalesCalc.cpp . Your program will ask the user to enter the number of chili dogs, corn dogs, chips, soft drinks, and water bottles sold in order. Be sure to prompt and read each item separately. All of the items but the water bottles are taxable at a rate of 6.5 percent. The program will display the dollar amount of the taxable items sold, the dollar amount of the taxes, the dollar amount of non-taxable items sold, and the total of the three values: taxable amount, taxes, and non-taxable amount.

Create named constants with type double for the prices of the individual items and the tax rate. Use variables of type int to hold the quantity of each item sold. All other variables should be of type double.

Display Details
Use the stream manipulators (setw, setprecision, fixed, etc.) described in Chapter 3 to format the text as specified.

The labels Taxable:, Tax amount:, etc. must be displayed left justified in a field fifteen characters wide. Display the $ in a field exactly wide enough to fit the character. Right justify the amounts in a field ten characters wide.

Make sure you end your output with the endl or "\n" new line character.

Sample Output:
```
How many chili dogs were sold? 297
How many corn dogs were sold? 514
How many bags of chips were sold? 205
How many soft drinks were sold? 801
How many bottles of water were sold? 1036

Taxable:       $  10239.50
Tax amount:    $    665.57
Non-taxable:   $   4144.00
Total:         $  15049.07
