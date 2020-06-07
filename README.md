# priority-queue
Öncelikli Sıralandırma Kontanır ile ilgili çalışmalar

Bilgisayar bilimlerinde veri yapıları (data structures) konularında kullanılan veri yapısının ismidir. Konteynır adaptör türlerindendr.
Queue da FIFO(first input first output) yani ilk giren ilk çıkar mantığında çalışmakta ilen priority_queue de ise bu mantık dışında önceliklendirme olarak operitor< görevinde çalışmaktadır.

Bazı hazır funtionlar şunlardır;
push() : eleman eklemek 
pop() : ilk elemanı çıkartır ve sizeda da 1 azalma gerçekleşir
size(): eleman sayısını döndürür
empty(): kontainerın boş olup olmadığını bakar.boş ise 1 ,dolu ise 0 değerini döndürür
swap(): elemanlar arasında takas yapar


Example1 de bu hazır functionlar kullanılarak bir basit örnek oluşturulmuştur.
Example2 de önceliklendirme sıralaması bizim tarafımızdan değiştirilerek bir örnek oluşturulmuştur.
en_uzun_kelime deki örnek de ise basit bir proje uygulamaya çalışıldı. Bir paragraftaki en uzun kelime hangisi bulma yönünde priority_queue kullanılarak sonuç bulunmuştur.
