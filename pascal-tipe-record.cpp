program tipe_record;
uses crt;

var
  siswa: record
           nama: string[20];
           umur: integer;
           sekolah: string[30];
           kota: string[20];
         end;

begin
  clrscr;

  siswa.nama := 'Anto';
  siswa.umur := 17;
  siswa.sekolah := 'SMA 1 Durian Runtuh';
  siswa.kota := 'Pelembang';

  writeln('Nama     : ', siswa.nama);
  writeln('Umur     : ', siswa.umur);
  writeln('Sekolah  : ', siswa.sekolah);
  writeln('Kota     : ', siswa.kota);

  readln;
end.
