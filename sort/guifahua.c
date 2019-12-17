(tetris->flag == 1 && a[tetris->x][tetris->y - 1] == 0 &&
		a[tetris->x + 2][tetris->y - 1] == 0  &&
		a[tetris->x + 2][tetris->y] == 0) 
		||(tetris->flag == 2 && a[tetris->x - 2][tetris->y] ==0 &&
		a[tetris->x + 2][tetris->y] ==0 &&
		a[tetris->x + 4][tetris->y] ==0 )
		||(tetris->flag == 3 && a[tetris->x][tetris->y - 1] ==0 &&
		a[tetris->x][tetris->y + 1] ==0 &&
		a[tetris->x][tetris->y + 2] ==0 )
		||(tetris->flag == 4 && a[tetris->x - 2][tetris->y] ==0 &&
		a[tetris->x + 2][tetris->y] ==0 &&
		a[tetris->x][tetris->y + 1] ==0 )
		||(tetris->flag == 5 && a[tetris->x][tetris->y - 1] ==0 &&
		a[tetris->x][tetris->y + 1] ==0 &&
		a[tetris->x - 2][tetris->y] ==0 )
		||(tetris->flag == 6 && a[tetris->x][tetris->y - 1] ==0 &&
		a[tetris->x - 2][tetris->y] ==0 &&
		a[tetris->x + 2][tetris->y] ==0 )
		||(tetris->flag == 7 && a[tetris->x][tetris->y - 1] ==0 &&
		a[tetris->x][tetris->y + 1] ==0 &&
		a[tetris->x + 2][tetris->y] ==0 )
		||(tetris->flag == 8 && a[tetris->x][tetris->y + 1] ==0 &&
		a[tetris->x - 2][tetris->y] ==0 &&
		a[tetris->x + 2][tetris->y + 1] ==0 )
		||(tetris->flag == 9 && a[tetris->x][tetris->y - 1] ==0 &&
		a[tetris->x - 2][tetris->y] ==0 &&
		a[tetris->x - 2][tetris->y + 1] ==0 )
		||(tetris->flag == 10 && a[tetris->x][tetris->y - 1] ==0 &&
		a[tetris->x - 2][tetris->y - 1] ==0 &&
		a[tetris->x + 2][tetris->y] ==0 )
		||(tetris->flag == 11 && a[tetris->x][tetris->y + 1] ==0 &&
		a[ tetris->x - 2][tetris->y - 1] ==0 &&
		a[tetris->x - 2][tetris->y] ==0 )
		||(tetris->flag == 12 && a[tetris->x][tetris->y - 1] ==0 &&
		a[tetris->x][tetris->y + 1] ==0 &&
		a[tetris->x - 2][tetris->y - 1] ==0 )
		||(tetris->flag == 13 && a[tetris->x][tetris->y] ==0 &&
		a[tetris->x + 2][tetris->y - 1] ==0 &&
		a[tetris->x + 2][tetris->y] ==0 )
		||(tetris->flag == 14 && a[tetris->x][tetris->y - 1] ==0 &&
		a[tetris->x][tetris->y + 1] ==0 &&
		a[tetris->x + 2][tetris->y + 1] ==0 )
		||(tetris->flag == 15 && a[tetris->x - 2][tetris->y] ==0 &&
		a[tetris->x - 2][tetris->y + 1] ==0 &&
		a[tetris->x + 2][tetris->y] ==0 )
		||(tetris->flag == 16 && a[tetris->x][tetris->y + 1] ==0 &&
		a[tetris->x][tetris->y - 1] ==0 &&
		a[tetris->x + 2][tetris->y - 1] ==0 )
		||(tetris->flag == 17 && a[tetris->x - 2][tetris->y] ==0 &&
		a[tetris->x + 2][tetris->y + 1] ==0 &&
		a[tetris->x + 2][tetris->y + 1] ==0 )
		||(tetris->flag == 18 && a[tetris->x][tetris->y - 1] ==0 &&
		a[tetris->x][tetris->y + 1] ==0 &&
		a[tetris->x - 2][tetris->y + 1] ==0 )
		||(tetris->flag == 19 && a[tetris->x - 2][tetris->y] ==0 &&
		a[tetris->x + 2][tetris->y] ==0 &&
		a[tetris->x - 2][tetris->y - 1] ==0 )