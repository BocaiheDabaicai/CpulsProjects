## 读程题

1.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-15-27-38-image.png)

结果：1，0



2.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-15-28-41-image.png)

结果：5



3.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-15-29-51-image.png)

结果：789



4.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-15-31-51-image.png)

结果：500



5.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-15-33-07-image.png)

结果：a=0 b=0



6.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-15-34-01-image.png)

结果：x:1 y:6



## 编程题

1.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-15-35-21-image.png)

答：

```c
void five_student(int n){
    if(n == 1) return 10;
    return five_student(n-1) + 2;
}
```



2.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-15-38-48-image.png)

答：

```c
void Split(unsigner short a, unsigned short *p0dd,unsigned short *pEven){
    
}
```



3.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-15-44-38-image.png)

答：

```c
void result(char jia[],int n){
    char yi[3] = {'x','y','z'},
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(jia[i] = 'a' && yi[j] != 'x') printf("a = %c\n",yi[j]);
            else if(jia[i] = 'c' && yi[j] != 'x' && yi[j] != 'z') 
                printf("c = %c\n",yi[j]);
            else 
                printf("b = %c\n",yi[j]);
        }
    }
}
```



4.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-15-54-32-image.png)

答：

```c
void result(){
    char str[100];
    int n;
    scanf("%s",str);
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("%c",str[0]);
        str = str << 1;
    }
}
```



5.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-15-57-25-image.png)

答：

```c
void result(){
    int data1=1,data2=2,data3;
    int n=10;
    
    printf("%d\n",data1);
    printf("%d %d\n",data1,data2);

    for(int i=3;i<=n;i++){
        data2 += data1;
        if(i%2 != 0) printf("")
    }
}

```



6.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-16-04-14-image.png)

答：

```c
void result(int arr[],int n,int length){
    for(int i=0;i<n;i++){  // 排前n个数，使前n个最大数在数组最前面
        int temp = arr[i];    
        for(int j=i+1;j<length;j++){
            if(temp < arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(int i=n-1;i>=0;i--)
        printf("%d ",arr[i]);
}
```



7.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-16-11-55-image.png)

答：

```c
void result(){
    
}
```



## 专业综合

1.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-16-14-34-image.png)

答：



2.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-16-15-21-image.png)

答：



3.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-16-15-34-image.png)

答：



4.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-16-15-45-image.png)

答：

首先，从技术创新的角度来说，通过使用DeepSeek，可以带领各行各业在业务场景、文字工作、文案撰写、软硬件交互革新等等方面促进行业发展，提高行业的工作效率，减轻人为工作的负担，使工作的内容聚焦在更加需要想象力、自主设计的工作性质上来，将工作从繁杂冗余、重复性高的场景中解放出来，这是DeepSeek对于技术创新的有利支撑。

另外，从社会责任的角度来说，DeepSeek需要更多的学习工作者共同参与进来，制订一系列规范、合理、有助于社会发展的规则，技术创新不能跑偏，社会责任也离不开技术的创新，两者需要在相互促进、相互制约的情况下面合理地发展起来，帮助整个社会，乃至国家繁荣富强。

所以，总的来说，我的看法是技术创新与社会责任之间的平衡，应该是在社会责任的制约下去取得技术创新，同时再由技术创新来规范化社会责任。



5.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-16-25-40-image.png)

答：

在定义上，机器学习可以发现执行任务的规则，它是通过输入数据，然后根据预期输出的结果，衡量算法得到的结果与预期输出的结果之间的差异，也就是将输入数据变成有意义的输出结果。而深度学习是机器学习的一个分支，它是从数据中学习表示的一种新方法，强调从连续的层中学习，这些层会得到越来越有意义的表示。因此深度学习是指从更广泛、更深度的层中去不断获得越来越有意义的表示，以此来更加靠近预期结果的过程。

在方法上，深度学习的方法有Kreas、LightGBM等等



6.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-16-47-04-image.png)

答：



7.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-16-47-13-image.png)

答：



8.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-16-47-46-image.png)

答：



9.

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-16-48-18-image.png)

答：



## 翻译题

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-16-48-58-image.png)

![](C:\Users\NfryCreator\AppData\Roaming\marktext\images\2025-03-09-16-49-04-image.png)

答：

在计算机视觉领域，深度学习已经带来了革命性改变。图像，作为一种丰富的视觉信息资源，由两种不同维度结构的像素组成，分别是维度结构、多维度结构。分析和理解这些复杂的视觉模型去抽取有意义的内容已经在这个领域里形成一个长期目标了。传统的图像认知方法，例如使用手绘特征像SIFT（定量特征转换）和HOG（定位线性点），已经限制了海量图像多样性的处理。

随着深度学习的出现，计算神经网络（CNNS）带来了一个优秀的途径。CNNS被设计用于自动化学习复杂的结构，从图像的层级、层级池和连接层上。这些年之后，研究者已经不断地提升了CNN的架构。例如，阿利克斯网络，首个成功的巨大规模型的计算神经网络，证明了深度神经网络在图像定义上的力量。随后，越来越多先进的架构，像VGGNet,ResNet和“认知”被推出。特别是ResNet，介绍了连接的概念，这具有重大意义地消除了消灭线性地问题在训练，使许多更深入的神经网络发挥作用。

最近


