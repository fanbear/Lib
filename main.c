#include "libmx.h"

bool cmp(void *l, void *r);

// bool cmp(void *l, void *r)
// {
//     if(mx_strcmp((void*)l,(void*)r) > 0) return true;
//     else return false;
// }


int main (){


	//***************************** Utils pack *******************************



		//*********** mx_print_unicode *************
		// printf("Вывести unicode\n");
		// mx_print_unicode('*');



		//***** mx_print_strarr ********
		// char *arr[4] = {"ASDB", "asdasd", "qweqwe", "asdasd"};
		// // char **arr = NULL;
		// char *delim = {"//"};
		// mx_print_strarr(arr, delim);



		//******* mx_nbr_to_hex ********
		// unsigned long nbr = 1000;
		// char *dst = mx_nbr_to_hex(nbr);
		// for(int i = 0; dst[i] != '\0'; i++)
		// {
		// 	printf("%c", dst[i]);
		// }



		//********* mx_itoa *****************
		// printf("%s\n", mx_itoa(-2548546));



		//********* mx_quicksort *************
		// char *arr[] = {"666666", "333", "999999999", "1", "88888888", "4444", "55555", "7777777", "22"};
		// // char **arr = NULL;
		// // char *arr[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael", "wwwwww"};
		// int i = mx_quicksort(arr, 0, 8); //returns 2
		// for (int i = 0; i < 9; ++i)
		// {
		// 	printf("%s\n", arr[i]);
		// }
		// printf("count = %i\n", i);



	//------------------------------------------------------------------------


	//***************************** String pack *********************************


		//******** mx_swap_char **********
		// char s1 = 'a';
		// char s2 = 'b';
		// mx_swap_char(&s1, &s2);
		// printf("%c\n", s1);
		// printf("%c\n", s2);



		// char str[] = "ONE";
		// // mx_swap_char(&str[0], &str[1]); //'str' now is "NOE"
		// // printf("%s\n", str);
		// mx_swap_char(&str[0], &str[1]); //'str' now is "NEO"
		// printf("%s\n", str);



		//******** mx_str_reverse *********
		// char *str = NULL;
		// mx_str_reverse(str); //'str' now is "revo emag"
		// printf("%s", str);



		//******* mx_strdel *********    
	    // char *arr = malloc(200);
	    // mx_strdel(&arr);
	    


		//******* mx_del_strarr *********
		// char **arr = (char**)malloc(sizeof(char *) * 10);
		// for(int i = 0; i < 10; i++){
		// 	arr[i] = (char*)malloc(sizeof(char *) * 10);
		// 	for(int j = 0; j != 10; j++){
		// 		arr[i][j] = 'a';
		// 	}
		// }
		// mx_strdel(&arr[1]);
		// printf("%s\n", arr[1]);
		

		//******* mx_get_char_index *******
		// char *str = NULL;
		// char c = 'a';
		// printf("%i\n", mx_get_char_index(str, c));



		//******* mx_strndup **********
		// char s1[] = "0123456789";
		// printf("%s\n", mx_strndup(s1, 5));



		//******* mx_strncpy **********
		// char dst[10] = "1111111111";
		// char src[10] = "86420068\0";
	 	// printf ("%s\n", strncpy(dst, src,10));
	 	// printf ("%s", mx_strncpy(dst, src,4));



		//******* mx_strcat ***********
	 	// char dst[1024]="ABS";
		// char app[1024]="DFJ";
		// strcat(dst,app);
		// printf ("dst:%s\n",dst);

		// char s2[1024]="ABS";
		// char s1[1024]="DFJ";
		// mx_strcat(s2,s1);
		// printf("dst:%s", s2);



		//******* mx_strstr ********
		// char str1[] = "0123456789";
		// char str2 [2]= "12";
		// char *istr = mx_strstr(str1,str2);
		// char *istr2 = strstr(str1,str2);
		// printf("mx_strstr = %s\n", istr);
		// printf("strstr = %s\n", istr2);
		// printf ("%I64d\n",istr-str1+1);



		//******* mx_get_substr_index
		// printf("%i\n", mx_get_substr_index("McDonalds", "Don"));
		// printf("%i\n", mx_get_substr_index("McDonalds Donuts", "on"));
	 	// printf("%i\n", mx_get_substr_index("McDonalds", "Donatello"));
		// printf("%i\n", mx_get_substr_index("McDonalds", NULL));
	 	// printf("%i\n", mx_get_substr_index(NULL, "Don"));



		//******* mx_count_substr ********
	 	// char str[] = "yo, yo, yo Neo";
	  	// char sub[] = "yo";
	  	// printf("%i\n", mx_count_substr(str, sub)); //returns 3
	  	// printf("%i\n", mx_count_substr(str, NULL)); //returns -1
	  	// printf("%i\n", mx_count_substr(NULL, sub)); //returns -1



		//******** mx_count_words *************
	 // 	char str[] = "****fdsa*****";
		// printf("%i\n", mx_count_words(str, '*')); //returns 2
		// printf("%i\n", mx_count_words(str, ' ')); //returns 5
		// printf("%i\n", mx_count_words(NULL, ' ')); //returns -1



		//********* *mx_strtrim *********
	    // char name[] = "\f      asd     \t\n ";
	    // char *temp = mx_strtrim(name); //returns "My name... is Neo";
	    // printf("%s\n", temp);


		//******* mx_del_extra_spaces **********
		// char *name = "   4eg    c1UKGd    t    17LdCqzt87iPclls9H    ";
		// char *new = mx_del_extra_spaces(name);
		// printf("%s\n", new);



		// ******* mx_strsplit *************
		// char *s = "**Good bye,**Mr.*Anderson.****";
		// char **arr = mx_strsplit(s, '*');
		// printf("%s\n", *arr);
		// for(int i = 0; i < 3; i++){
		// 	printf("%s\n", arr[i]);
		// }
		// s = " Knock, knock, Neo. ";
		// arr = strsplit(s, ' '); // arr = []



		//******** mx_strjoin *************
		// char str1[] = "this";
		// char str2[] = "dodge ";
		// char *str3 = NULL;
		// printf("%s\n", mx_strjoin(str2, str1)); //returns "dodge this"
		// printf("%s\n", mx_strjoin(str1, str3)); //returns "this"
		// printf("%s\n", mx_strjoin(str3, str3)); //returns NULL



		//********* mx_file_to_str ************
		// printf("%s\n", mx_file_to_str(argv[1])); 
		// argc = 5;
		// file name = agent.txt



		//******** mx_replace_substr ***********
		// char *mx_replace_substr(const char *str, const char *sub, const char *replace)
		// char* s = mx_replace_substr("McDonalds asd", "alds", "uts"); //returns "McDonuts"
		// printf("%s\n", s);
		// char* r = mx_replace_substr("Ururu turu", "ru", "ta"); //returns "Utata tuta"
		// printf("%s\n", r);




	//---------------------------------------------------------------------------



//************************* Memory pack*********************


 	//******** *mx_memset **************
	// void *mx_memset(void *b, int c, size_t len)

	// char a[]= "bbbbbbasdasds";
	// int size = 5;
	// int d = 'a';
	// char *str = mx_memset(a, d, size);
	// char *ss = memset(a, d, size);
	// printf("%s\n", str);
	// printf("%s\n", ss);


	//*********** *mx_memcpy ***************
	// void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n)
	
	// int n = 0;
	// char *src = "0123456789";
	// char *dst1 = mx_strnew(n);
	// char *dst2 = mx_strnew(n);
	// mx_memcpy(dst1, src, n);
	// memcpy(dst2, src, n);
	// printf("mx_memcpy = %s\n", dst1);
	// printf("memcpy = %s\n", dst2);


	//********* mx_memccpy **********
	// unsigned char src[15] = "";
 // 	unsigned char dst[15] = "";
 // 	unsigned char ss[15] = "";
 // 	memccpy (dst, src,'9', 8);
 // 	mx_memccpy(ss, src, '9', 8);
 // 	printf("memccpy = %s\n", dst);
 // 	printf("mx_memccpy = %s\n", ss);

 	//********* mx_memcmp **********
	
	// char str1[256] = "1238567";
	// char str2[256] = "1234567";

	// int n = memcmp(str1, str2, 5);
	// int d = mx_memcmp(str1, str2, 5);
	// printf("memcmp = %i\n", n);
	// printf("mx_memcmp = %i\n", d);

	//********* mx_memchr *********

	// char str[256] = "12)456";
	// char *temp = memchr(str, ')', 8);
	// char *buf = mx_memchr(str, ')', 8);
	// printf("memchr = %s\n", temp);
	// printf("mx_memchr = %s\n", buf);

	//********* mx_memrchr *********

	// char *str1 = NULL;
	// char *str2 = NULL;

	// str1 = mx_memrchr("Trinity", 'i', 7); //returns "ity"
 	// str2 = mx_memrchr("Trinity", 'M', 7); //returns NULL
 	// printf("mx_memrchr = %s\n", str1);
 	// printf("mx_memrchr = %s\n", str2);

 	//********* mx_memmem **********

	// char *str1;
	// // char str2 = NULL;
 	// str1 = mx_memmem("PritySTR", 9, "ity", 3); //returns "itySTR"
	// // mx_memmem("ity", 'M', 7); //returns NULL
	// printf("str1 = %s\n", str1);

	
	

	//********* mx_realloc ***********

	// char *p = (char *) malloc(17);
	// if(!p) {
	// 	printf("Allocation error.");
	// 	exit (1);
	// }
	// strcpy(p, "This is 16 chars");
	// p = (char *) mx_realloc (p,12);
	// if(!p) {
	// printf("Allocation error.");
	// exit (1);
	// }
	// strcat (p, ".");

	// printf("%s\n", p);
	// printf("%lu\n", malloc_size(p));
	// free(p);





//************************************** LIST PACK ****************************

	//********** mx_create_node **************


	
	// // Создать нод
	
	// t_list *head = mx_create_node("first");
	// printf("\n");
	// printf("*** mx_crate_node---------------\n");
	// printf("||--- Должно создать нод *first* ---||\n");
	// printf("Созданый нод = %s\n", head->data);
	// printf("*** ----------------------------\n");
	// printf("\n");
	// //-------------------------------------------

	// // Двигаем впере нод ------------------------
	// mx_push_front(&head, "second");
	// mx_push_front(&head, "three");
	// printf("\n");
	// printf("*** mx_push_front ---------------\n");
	// printf("||--- Должно добавить *second*  и *three* ---||\n");
	// printf("node 1 list = %s\n", head->data);
	// printf("head 2 list = %s\n", head->next->data);
	// printf("head 3 list = %s\n", head->next->next->data);
	// printf("\n");

	// //--------------------------------------------------

	// //Добавляем в конец --------------------------------
	// mx_push_back(&head,"last");
	// printf("*** mx_push_back ---------------\n");
	// printf("||--- Должно добавить *last* ---||\n");
	// t_list *current = head;
	// while(current != NULL){
	// 	printf("%s\n", current->data);
	// 	current = current->next;
	// }
	// printf("***------------------------------\n");
	// printf("\n");
	// //-------------------------------------------------

	// //Удаляем с начала списка --------------------------------
	// mx_pop_front(&head);
	// printf("*** mx_pop_front ---------------\n");
	// printf("||--- Должно удалить *three* ---||\n");
	// t_list *current1 = head;
	// while(current1 != NULL){
	// 	printf("%s\n", current1->data);
	// 	current1 = current1->next;
	// }
	// printf("***------------------------------\n");
	// printf("\n");
	// //-------------------------------------------------

	// //Удаляем с конца списка --------------------------------
	// mx_pop_back(&head);
	// mx_pop_back(&head);
	// mx_pop_front(&head);
	// printf("*** mx_pop_back ---------------\n");
	// printf("||--- Должно удалить *last* ---||\n");
	// t_list *current2 = head;
	// while(current2 != NULL){
	// 	printf("%s\n", current2->data);
	// 	current2 = current2->next;
	// }
	// printf("***------------------------------\n");
	// printf("\n");
	// //-------------------------------------------------

	// //Размер списка --------------------------------
	// printf("*** mx_pop_back ---------------\n");
	// printf("||--- Должно вывести размер списка 2 ---||\n");
	// printf("Размер списка = %i\n", mx_list_size(head));
	// printf("***------------------------------\n");
	// printf("\n");
	// //-------------------------------------------------

	// Сортировка списка

	// t_list *head = mx_create_node("a");
	// mx_push_front(&head, "b");
	// mx_push_front(&head, "c");
	// mx_push_front(&head, "d");

	// t_list *current1 = head;

	// while(current1 != NULL){
	// 	printf("входные данные = %s\n", current1->data);
	// 	current1 = current1->next;
	// }

	// mx_sort_list(head, cmp);
	// t_list *s = head;
	// while(s != NULL){
	// 	printf("после сортировки = %s\n", s->data);
	// 	s = s->next;
	// }
	system("leaks -q main");	
}







