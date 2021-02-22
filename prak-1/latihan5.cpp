// Buatlah program untuk menampilkan persamaan kuadrat y=x2 dimana nilai x dari 0 sampai 100 bila submenu yang dibuat dipilih.

void CCupuDlg::OnButton1() {
    int y,x;

    CDC* pDC = GetDC();
    pDC->MoveTo(0,0); // membuat satu nilai awal pertama
    for(x=0;x<=100;x++) {
        y = x*x; // fungsi yang diminta
        pDC->LineTo(x,y); // membuat garis dengan titik akhir (x,y), dg nilai awal di atas
        pDC->MoveTo(x,y); // menjadikan (x,y) sebagai titik awal untuk line selanjutnya
    }
}