// Buatlah program untuk menampilkan persamaan linear y=x pada fungsi OnDraw(CDC* pDC) dimana nilai x dari 0 sampai 100 

void CCupuDlg::OnButton1() {
    int y,x;

    CDC* pDC = GetDC();
    pDC->MoveTo(0,0); // menset nilai awal pada titik (0,0)
    for(x=0;x<=100;x++) {
        pDC->LineTo(x,x); // membuat garis dengan titik akhir (x,x), dg nilai awal di atas
        pDC->MoveTo(x,x); // menjadikan (x,y) sebagai titik awal untuk line selanjutnya.
    }
}