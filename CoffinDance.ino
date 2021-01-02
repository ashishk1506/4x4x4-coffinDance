
//created by ASHISH KUMAR
//Coffin dance https://www.youtube.com/watch?v=jl9xKw_xEas
int z[] = {23,22,1,3,21,19,5,17,15,2,4,16,27,14,12,13};

int mid[] = {19,5,2,4};
int extreme[] = {23,22,1,3,17,21,15,16,14,27,13,12};
//int alternateOne[] = {23,15,14,13,17,1};
//int alternateTwo[] = {21,27,12,16,3,22};
int y_0[] = {3,1,22,23};
int y_1[] = {21,19,5,17};
int y_2[] = {15,2,4,16};
int y_3[] = {27,14,12,13};
//
int x_0[] = {23,21,15,27};
int x_1[] = {22,19,2,14};
int x_2[] = {1,5,4,12};
int x_3[] = {13,16,17,3};

int layer[] = {26,25,33,32};
int i,j;
void setup(){
  for(i=0;i<16;i++)
  {
    pinMode(z[i],OUTPUT);
    }
  for(i=0;i<4;i++)
  {
    pinMode(layer[i],OUTPUT);
    }
    
     
      
  }
void loop(){
  //function call

// 
//    glowAcendingXY(y0,4,layer,0,100); 
//    dimDescendingXY(y0,3,layer,0,100);
//
//
//    glowAcendingXY(x1,4,layer,0,100); 
//    dimDescendingXY(x1,3,layer,0,100);
//
//    glowAcendingZ(z[3],layer,4, 200);dimDescendingZ(z[3],layer,1,200);
//    dimDescendingZ(z[3],layer,3, 200);
//    glowAcendingZ(z[1],layer,3, 200);
//    glowAcendingZ(z[5],layer,1, 200); glowAcendingZ(z[9],layer,3,200);
//    glowAcendingZ(z[6],layer,3, 200); glowAcendingZ(z[4],layer,1,200); 
//    glowAcendingZ(z[7],layer,2, 200);

//     glowXYZ(z,layer,4, 100);     //glowAllXYZ(z,layer,layerLimit,t)
//     dimXYZ(layer,3, 100);
//      glowXYZ(z,layer,4, 100); 
//      dimXYZ(layer,2,100);
//      dimXYZ(layer,2,100);

      
//       glowXYZ(mid,layer,3, 50);  
//       dimXYZ(layer,3,50);
//       glowXYZ(mid,layer,4, 50);  
//       dimXYZ(layer,4,50);

      

//       glowXYZ(mid,4,layer,4, 50);  
//       dimXYZ(layer,3,50);
//       zOff(mid,4);
//       
//       glowXYZ(extreme,12,layer,4,50); //(array,arraySize,layer,layerLimit,delay)
//       dimXYZ(layer,3,50);
//       zOff(extreme,12);
//////          
                
             

 //0:00                
               delay(1300);
               zOff(z,16);
               layerOff(layer,4);
               glowXYZ(y_0,4,layer,1,10);
               delay(1800);
               glowXYZ(y_1,4,layer,2,10);
               delay(1800);
               glowXYZ(y_2,4,layer,3,10);
               delay(3800);

               zOff(z,16);
               glowXYZ(y_3,4,layer,4,1);
               layerOff(layer,3);
               delay(1800);
               glowXYZ(y_2,4,layer,4,1);
               layerOff(layer,2);
               delay(1800);
               glowXYZ(y_1,4,layer,4,1);
               layerOff(layer,1);
               delay(2000);
//0:15
               delay(2000);
//0:16
               zOff(z,16);
               layerOff(layer,4);
               int r=9;
               while(r)
               {
                 int t=1;
                  while(t<=4)
                  {
                     glowLine(x_0,4,layer,t,r*3);          //glowLine(array,size,layer,layerLimit,delay)
                     zOff(x_0,4);
                     glowLine(y_3,4,layer,t,r*3);  
                     zOff(y_3,4);
                     
                     glowLine(x_3,4,layer,t,r*3);  
                     zOff(x_3,4);
                     glowLine(y_0,4,layer,t,r*3);  
                     zOff(y_0,4);
                     
                     layerOff(layer,t);
                     t++;
                  }
                  r--;
               }
//0:24         
                int t=30;
                while(t)
                {
                  alternate(extreme,12,layer,4,50);  //alternate(array,size,layer,layerLimit,delay)
                  t--;
                }   
                  t=30;
                while(t)
                {
                  alternate(extreme,12,layer,4,30);  //alternate(array,size,layer,layerLimit,delay)
                  t--;
                }   
                 zOff(z,16);
                 layerOff(layer,4);

                layerOff(layer,4);
                cubeSet(5,4,19,2,1,2);
                delay(1000);
                zOff(mid,4);
                glowXYZ(extreme,12,layer,4,10);
                delay(800);
                zOff(extreme,12);
                layerOff(layer,4);
                 
                t=17;
                while(t)
                {
                 glowXYZ(mid,4,layer,4, 56);  
                 dimXYZ(layer,4,56);
                              
                 glowXYZ(extreme,12,layer,4,56); //(array,arraySize,layer,layerLimit,delay)
                 dimXYZ(layer,4,56);
                 zOff(extreme,16);
                 t--;
                }
             t=8;
             while(t)
             {
                glowLine(y_0,4,layer,2,1);
                delay(56);
                glowLine(y_1,4,layer,2,1);
                delay(56);
                glowLine(y_2,4,layer,2,1);
                delay(56);
                glowLine(y_3,4,layer,2,1);
                delay(56);
                dimLine(y_3,4,1);
                delay(56);
                dimLine(y_2,4,1);
                delay(56);
                dimLine(y_1,4,1);
                delay(56);
                dimLine(y_0,4,1);
                delay(56);
  
                glowLine(y_0,4,layer,4,1);
                layerOff(layer,2);
                delay(56);
                glowLine(y_1,4,layer,2,1);
                layerOff(layer,2);
                delay(56);
                glowLine(y_2,4,layer,2,1);
                layerOff(layer,2);
                delay(56);
                glowLine(y_3,4,layer,2,1);
                layerOff(layer,2);
                delay(56);
                dimLine(y_3,4,1);
                layerOff(layer,2);
                delay(56);
                dimLine(y_2,4,1);
                layerOff(layer,2);
                delay(56);
                dimLine(y_1,4,1);
                layerOff(layer,2);
                delay(56);
                dimLine(y_0,4,1);
                layerOff(layer,2);
                delay(56);
                t--;
             }

              t=45;
                while(t)
                {
                  alternate(extreme,12,layer,4,50);  //alternate(array,size,layer,layerLimit,delay)
                  t--;
                }   
                  t=45;
                while(t)
                {
                  alternate(extreme,12,layer,4,30);  //alternate(array,size,layer,layerLimit,delay)
                  t--;
                }   
                 zOff(z,16);
                 layerOff(layer,4);

                 t=17;
                while(t)
                {
                 glowXYZ(extreme,12,layer,4, 56);  
                 dimXYZ(layer,4,56);
                              
                 glowXYZ(mid,4,layer,4,56); //(array,arraySize,layer,layerLimit,delay)
                 dimXYZ(layer,4,56);
                 zOff(extreme,16);
                 t--;
                }


                  t=8;
             while(t)
             {
                glowLine(y_0,4,layer,2,1);
                delay(56);
                glowLine(y_1,4,layer,2,1);
                delay(56);
                glowLine(y_2,4,layer,2,1);
                delay(56);
                glowLine(y_3,4,layer,2,1);
                delay(56);
                dimLine(y_3,4,1);
                delay(56);
                dimLine(y_2,4,1);
                delay(56);
                dimLine(y_1,4,1);
                delay(56);
                dimLine(y_0,4,1);
                delay(56);
  
                glowLine(y_0,4,layer,4,1);
                layerOff(layer,2);
                delay(56);
                glowLine(y_1,4,layer,2,1);
                layerOff(layer,2);
                delay(56);
                glowLine(y_2,4,layer,2,1);
                layerOff(layer,2);
                delay(56);
                glowLine(y_3,4,layer,2,1);
                layerOff(layer,2);
                delay(56);
                dimLine(y_3,4,1);
                layerOff(layer,2);
                delay(56);
                dimLine(y_2,4,1);
                layerOff(layer,2);
                delay(56);
                dimLine(y_1,4,1);
                layerOff(layer,2);
                delay(56);
                dimLine(y_0,4,1);
                layerOff(layer,2);
                delay(56);
                t--;
             }

//             delay(1800);
//               glowXYZ(y_1,4,layer,2,10);
//               delay(1800);
//               glowXYZ(y_2,4,layer,3,10);
//               delay(1800);
//

//               int t=4;   //all one side snake
//                 while(t)
//                 {
//                   glowXYZ(x_0,4,layer,4,10);          //glowLine(array,size,layer,layerLimit,delay)
//                   delay(t*50);
//                   zOff(x_0,4);
//                   glowXYZ(y_3,4,layer,4,10); 
//                   delay(t*50); 
//                   zOff(y_3,4);
//                   
//                   glowXYZ(x_3,4,layer,4,10);  
//                   delay(t*50);
//                   zOff(x_3,4);
//                   glowLine(y_0,4,layer,4,10);
//                   delay(t*50);  
//                   zOff(y_0,4);
//
//                   t--;
//                 }
           
     //cubeSet(z_1,z_2,z_3,z_4,layer_1,layer_2)
     
//               glowXYZ(y_1,4,layer,3,1);  //inner cube outer 1,2
//               glowXYZ(y_2,4,layer,3,1);
//               layerOff(layer,1);
//               delay(100);
//               zOff(y_1,4);
//               zOff(y_2,4);
//               
//               glowXYZ(extreme,12,layer,4,1);
//               layerOff(layer,3);
//               glowXYZ(extreme,4,layer,1,1);
//               delay(100);
//               zOff(z,16);
//               layerOff(layer,4); 
//    
}
 //functions
 void dimLine(int a[],int s,int t)
   { 
      int p;
      for(p=4; p>4-s; p--)
       {
        digitalWrite(a[p-1],LOW);
        delay(t);
       }
   }
 void cubeSet(int z_1,int z_2,int z_3,int z_4, int layer_1,int layer_2)
   {
     digitalWrite(layer[layer_1],LOW);
     digitalWrite(layer[layer_2],LOW);
     digitalWrite(z_1,HIGH);
     digitalWrite(z_2,HIGH);
     digitalWrite(z_3,HIGH);
     digitalWrite(z_4,HIGH);
   }
 void glowLine(int a[],int s,int layer[],int layerLimit,int t)
   {
      int p,q;
      for(q=0; q<layerLimit; q++)
        {
          digitalWrite(layer[q],LOW);
        }
      
      for(p=0; p<s; p++)
        {
          digitalWrite(a[p],HIGH);
          delay(t);
        }
   }
 void alternate(int extreme[],int s, int layer[],int layerLimit,int t )
     {
      int p,q;
      for(q=0; q<layerLimit; q++)
        {
          digitalWrite(layer[q],LOW);
        }
      for(p=0; p<s; p=p+2)
         {
           digitalWrite(extreme[p],HIGH);
         }
         delay(t);
       for(p=0; p<s; p=p+2)
         {
           digitalWrite(extreme[p],LOW);
         }
      for(p=1; p<s; p=p+2)
        { 
           digitalWrite(extreme[p],HIGH);
        }
        delay(t);
      for(p=1; p<s; p=p+2)
        { 
           digitalWrite(extreme[p],LOW);
        }
     }
 void zOff(int a[],int s)
 {
     int p;
     
     for(p=0; p<s ;p++)
     digitalWrite(a[p],LOW);
  }
 void layerOff(int a[],int s)
 {
     int p;
     
     for(p=0; p<s ;p++)
     digitalWrite(a[p],HIGH);
 }
 void glowXYZ(int a[],int s,int layer[],int layerLimit,int t )
    {
      int p,q;
       for(p=0; p<s; p++)
         {
          digitalWrite(a[p],HIGH); 
         }
       for(q=0; q<layerLimit; q++)
         {
          digitalWrite(layer[q],LOW);
          delay(t);
         }
    }
 void dimXYZ(int layer[],int layerLimit,int t )
    {
      int q;
       for(q=4; q>4-layerLimit; q--)
         {
          digitalWrite(layer[q-1],HIGH);
          delay(t);
         }
    }
 
//void glowAcendingXY(int led[],int ledLimit,int layer[],int activeLayer, int t) 
// {
//    int m,k;
//    for(k=0; k<4; k++)                    //layer
//       { 
//        digitalWrite(layer[k],HIGH);
//       }
//    digitalWrite(layer[activeLayer],LOW);
//    for(m=0; m<ledLimit; m++)              //led
//       {
//        digitalWrite(led[m],HIGH);
//        delay(t);
//       }
//  }
//void dimDescendingXY(int led[],int ledLimit,int layer[],int activeLayer, int t)
// {
//     int m,k;
//    for(k=0; k<4; k++)
//       { 
//        digitalWrite(layer[k],HIGH);
//       }
//    digitalWrite(layer[activeLayer],LOW);
//    for(m=3; m>= 4-ledLimit; m--)
//       {
//        digitalWrite(led[m],LOW);
//        delay(t);
//       }
// }
// void glowAcendingZ(int zAxis, int layer[], int layerLimit, int t)
// {
//     int p=0;
//     digitalWrite(zAxis,HIGH);
//     for(p=0; p<layerLimit; p++)
//      {
//         digitalWrite(layer[p],LOW);
//         delay(t);
//       } 
// } 
// void dimDescendingZ(int zAxis, int layer[], int layerLimit, int t)
// {
//    int p=3;
//      for(p=3; p>=4-layerLimit; p--)
//      {
//         digitalWrite(layer[p],HIGH);
//         delay(t);
//       }
//  }
