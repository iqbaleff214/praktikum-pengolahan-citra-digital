//  Buatlah program untuk menampilkan Tulisan “Ini adalah Teks” pada fungsi OnDraw(CDC* pDC) dengan menggunakan pDC->TextOut(10,10,"Ini adalah Teks"); 

void CCupuDlg::OnButton1() {
    CDC* pDC = GetDC();
    pDC->TextOut(10,10,"Ini adalah Teks");
}