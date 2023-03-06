void ShowAll( struct studentNode *walk ) {
 while( walk != NULL ) {
  printf( "%s ", walk->name ) ;
  walk = walk->next ;
 }//end while
 printf( " \n" ) ;
}//end function

struct studentNode *AddNode ( struct studentNode **walk, char name[], int age, char sex, float gpa ) {
	struct studentNode *temp = NULL ;
	while ( (*walk) != NULL ) {
		temp = *walk ;
		walk = &(*walk)->next ;
	} 
	*walk = new struct studentNode ;
	strcpy((*walk)->name, name) ;
	(*walk)->age = age ;
	(*walk)->sex = sex ;
	(*walk)->gpa = gpa ;
	(*walk)->next = NULL ;
	(*walk)->back = temp ;
	return *walk ;
}//end function

void InsNode( struct studentNode *walk, char name[], int age, char sex, float gpa ){
	if ( walk->back != NULL ){
		walk->back->next = new struct studentNode ;
		strcpy(walk->back->next->name, name) ;
		walk->back->next->age = age ;
		walk->back->next->sex = sex ;
		walk->back->next->gpa = gpa ;
		walk->back->next->next = walk ;
		walk->back->next->back = walk->back ;
		walk->back = walk->back->next ;
	}
	else {
		struct studentNode *begin = new struct studentNode ;
		strcpy(begin->name, name) ;
		begin->age = age ;
		begin->sex = sex ;
		begin->gpa = gpa ;
		begin->next = walk ;
		begin->back = NULL ;
		walk->back = begin ;
	}
}//end function

void GoBack( struct studentNode **walk ) {
	if ( (*walk)->back != NULL ) {
		*walk = (*walk)->back ;
	}
}//end function

void DelNode( struct studentNode *walk ) {
	struct studentNode *holder ;
	if ( walk-> back != NULL ) {
		walk->back->next = walk->next ;
	}
	else {
		walk = walk->next ;
	}
	if ( walk-> next != NULL ) {
		walk->next->back = walk->back ;
		holder = walk->next ;
	}
	else {
		holder = walk->back ;
	}
	*walk = *holder ;
}//end function