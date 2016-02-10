1./*

2. * C Program to find the possible subsets of the String

3. */

4.#include <stdio.h>

5. 

6.char string[50], n;

7.void subset(int, int, int);

8. 

9.int main()

10.{

11.    int i, len;

12. 

13.    printf("Enter the len of main set : ");

14.    scanf("%d", &len);

15.    printf("Enter the elements of main set : ");

16.    scanf("%s", string);

17.    n = len;

18.    printf("The subsets are :\n");

19.    for (i = 1;i <= n;i++)

20.        subset(0, 0, i);

21.}

22. 

23./*Function to find the number of subsets in the given string*/

24. 

25.void subset(int start, int index, int num_sub)

26.{

27.    int i, j;

28.    if (index - start + 1  ==  num_sub)

29.    {

30.        if (num_sub  ==  1)

31.        {

32.            for (i = 0;i < n;i++)

33.                printf("%c\n", string[i]);

34.        }

35.        else

36.        {

37.            for (j = index;j < n;j++)

38.            {

39.                for (i = start;i < index;i++)

40.                    printf("%c", string[i]);

41.                printf("%c\n", string[j]);

42.            }

43.            if (start != n - num_sub)

44.                subset(start + 1, start + 1, num_sub);

45.        }

46.    }

47.    else

48.    {

49.        subset(start, index + 1, num_sub);

50.    }

51.}


