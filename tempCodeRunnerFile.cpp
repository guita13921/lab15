	int n = 1;
	int temp;
	cout << "pass " << n << ":";
		for(int i = 0 ;i<N ;i++){
			if(d[i] > d[i+1]){
				temp = d[i];
				d[i+1] = d[i];
				d[i] = temp;
			}
		}

}