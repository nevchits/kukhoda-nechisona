#include <stdio.h>
#include "shanduro.h"
#include "muturiki.h"


vara* nzvimbo_isina_chinhu(){
    dzosa "\n\n\n\n\n\n";
}

chisina_mhando mutsetse_mutsva(){
    nyora("\n");
}

chisina_mhando nyora_nzvimbo(){
    nyora("%s",nzvimbo_isina_chinhu());
}

nhamba batanidza(nhamba rekutanga, nhamba repiri){
    dzosa rekutanga wedzera repiri;
}

nhamba berekanisa(nhamba yekutanga, nhamba yepiri){
    dzosa yekutanga bereka yepiri;
}

chisina_mhando chikuru(){
    nyora("Mubatanidzwa (add): %s", nechishona(batanidza(gumi_nerimwe ne shanu)));
    mutsetse_mutsva();
    nyora("Kubereka (multiply): %s", nechishona(berekanisa(tatu na shanu)));
    nyora_nzvimbo();
}