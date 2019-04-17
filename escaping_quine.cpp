#include<iostream>
char*z="\n\t\\\"\"\\tn#include<iostream>\nchar*z=,*d,*s;\nauto&o=std::cout;\nint main(){\n\tfor(d=(z+=4)+4;d<z+30;d++)o<<*d;\n\to<<*z;\n\tfor(d=z-4;d<z+241;d++){for(s=z-4;s-z;s++)if(*s==*d)break;s-z?o<<z[1]<<*(z-s+z-1):o<<*d;}\n\to<<*z;\n\tfor(d=z+30;d<z+241;d++)o<<*d;\n}\n",*d,*s;
auto&o=std::cout;
int main(){
        for(d=(z+=4)+4;d<z+30;d++)o<<*d;
        o<<*z;
        for(d=z-4;d<z+241;d++){for(s=z-4;s-z;s++)if(*s==*d)break;s-z?o<<z[1]<<*(z-s+z-1):o<<*d;}
        o<<*z;
        for(d=z+30;d<z+241;d++)o<<*d;
}