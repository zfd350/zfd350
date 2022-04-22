#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct zeng
{
	int bh,dj,rks,ccs,cc;
	char mc[1000],bgr[1000],jh[1000],ch[1000];
	struct zeng *next;
}zeng;
zeng*creat()//创建链表
{
   int i=1;
   zeng *p,*q,*head = NULL;
   q=(zeng*)malloc(sizeof(struct zeng));
   p=(zeng*)malloc(sizeof(struct zeng));
   head=(zeng*)malloc(sizeof(struct zeng));
   printf("请输入材料编号\n");    scanf("%d",&p->bh);		
   printf("再输入材料名称\n");     scanf("%s",p->mc);	    
   printf("再输入保管人\n");       scanf("%s",p->bgr);
   printf("输入单价\n入库数量\n出库数量\n");	scanf("%d%d%d",&p->dj ,&p->rks ,&p->ccs );
   printf("进货时间\n出货时间//0表示未出货\n");    scanf("%s %s",p->jh,p->ch);
        head->next =p;
  for(i=0;p->bh !=0;i++)
   {
	  printf("请再次输入材料编号,以编号0结束输入\n");scanf("%d",&q->bh);
	  if(q->bh ==0)
		  break;
	    printf("再输入材料名称\n"); scanf("%s",q->mc);    
	    printf("再输入保管人\n");scanf("%s",q->bgr);
		printf("输入单价\n入库数量\n出库数量\n");scanf("%d%d%d",&q->dj ,&q->rks ,&q->ccs );
	    printf("进货时间\n出货时间//0表示未出货\n");scanf("%s %s",q->jh,q->ch);
		p->next =q;
		p=q;
		q=(zeng*)malloc(sizeof(struct zeng));
   }
   p->next =NULL;
   return (head);
} 
zeng *creat2(zeng*head)
{
	zeng *p,*q,*q1;
   q1=(zeng*)malloc(sizeof(struct zeng));
  // q=(zeng*)malloc(sizeof(struct zeng));
   p=(zeng*)malloc(sizeof(struct zeng));
   for(p=head->next;;p=p->next )
      if(p->next ==NULL)
	   {
		   break;
	  }//查找原链表末尾，并使其指向新节点
   for(;p->bh !=0;)
   {
	  printf("请再次输入材料编号,以编号0结束输入\n");scanf("%d",&q1->bh);
	  if(q1->bh ==0)
		  break;
	    printf("再输入材料名称\n"); scanf("%s",q1->mc);    
	    printf("再输入保管人\n");scanf("%s",q1->bgr);
		printf("输入单价\n入库数量\n出库数量\n");scanf("%d%d%d",&q1->dj ,&q1->rks ,&q1->ccs );
	    printf("进货时间\n出货时间//0表示未出货\n");scanf("%s %s",q1->jh,q1->ch);
		p->next =q1;
		p=q1;
		q1=(zeng*)malloc(sizeof(struct zeng));
   }//输入新节点
   p->next =NULL;
   return (head);
}
void find(zeng * head)
{
  printf("根据编号查找请按1\n");
  printf("根据名称查找请按2\n");
  printf("根据单价查找请按3\n");
  printf("根据进货时间查找请按4\n");
  printf("根据出货时间查找请按5\n");
  printf("根据保管人查找请按6\n");
  printf("推出查找请按-1\n");
  int a,b,d,e;
  char z[1000];
  zeng *p;
	p=(zeng*)malloc(sizeof(struct zeng));
  while(1)
  {
	  scanf("%d",&a);
	  if(a==-1)
		  break;
	  else
	  {
	    switch(a)
	  {
	  case 1:
		  {
			  printf("请输入所查找材料的编号\n");
			  scanf("%d",&b);
			  for(p=head->next ;p!=NULL;p=p->next )
				  if(p->bh ==b)
					 {
		                 p->cc=p->rks - p->ccs ;
		                    printf("编号：%d 名称：%s 单价：%d ",p->bh,p->mc,p->dj );
		                       printf("入库数量：%d 库存数量：%d 出库数量：%d ",p->rks ,p->cc,p->ccs);
		                        printf("保管人：%s 进货时间：%s 出货时间：%s\n",p->bgr,p->jh,p->ch );
				  }
		  }break;
	  case 2:
		    {
			  printf("请输入所查找材料的名称\n");
			  scanf("%s",z);
			  for(p=head->next ;p!=NULL;p=p->next )
				  if(strcmp(z,p->mc )==0)
					 {
		                 p->cc=p->rks - p->ccs ;
		                    printf("编号：%d 名称：%s 单价：%d ",p->bh,p->mc,p->dj );
		                       printf("入库数量：%d 库存数量：%d 出库数量：%d ",p->rks ,p->cc,p->ccs);
		                        printf("保管人：%s 进货时间：%s 出货时间：%s\n",p->bgr,p->jh,p->ch );
				  }
		  }break;
	  case 3:
		    {
			  printf("请输入所查找材料的单价\n");
			  scanf("%d",&b);
			  for(p=head->next ;p!=NULL;p=p->next )
				  if(p->dj ==b)
					 {
		                 p->cc=p->rks - p->ccs ;
		                    printf("编号：%d 名称：%s 单价：%d ",p->bh,p->mc,p->dj );
		                       printf("入库数量：%d 库存数量：%d 出库数量：%d ",p->rks ,p->cc,p->ccs);
		                        printf("保管人：%s 进货时间：%s 出货时间：%s\n",p->bgr,p->jh,p->ch );
				  }
		  }break;
	  case 4:
		    {
			  printf("请输入所查找材料的进货时间\n");
			  scanf("%s",z);
			  for(p=head->next ;p!=NULL;p=p->next )
				  if(strcmp(z,p->jh  )==0)
					 {
		                 p->cc=p->rks - p->ccs ;
		                    printf("编号：%d 名称：%s 单价：%d ",p->bh,p->mc,p->dj );
		                       printf("入库数量：%d 库存数量：%d 出库数量：%d ",p->rks ,p->cc,p->ccs);
		                        printf("保管人：%s 进货时间：%s 出货时间：%s\n",p->bgr,p->jh,p->ch ); 
				  }
		  }break;
	  case 5:
		    {
			  printf("请输入所查找材料的出货时间\n");
			  scanf("%s",z);
			  for(p=head->next ;p!=NULL;p=p->next )
				  if(strcmp(z,p->ch  )==0)
					 {
						 p->cc=p->rks - p->ccs ;
		                    printf("编号：%d 名称：%s 单价：%d ",p->bh,p->mc,p->dj );
		                       printf("入库数量：%d 库存数量：%d 出库数量：%d ",p->rks ,p->cc,p->ccs);
		                        printf("保管人：%s 进货时间：%s 出货时间：%s\n",p->bgr,p->jh,p->ch );
				  }
		  }break;
	  case 6:
		    {
			  printf("请输入所查找材料的出货时间\n");
			  scanf("%s",z);
			  for(p=head->next ;p!=NULL;p=p->next )
				  if(strcmp(z,p->bgr   )==0)
					 {
		                 p->cc=p->rks - p->ccs ;
		                    printf("编号：%d 名称：%s 单价：%d ",p->bh,p->mc,p->dj );
		                       printf("入库数量：%d 库存数量：%d 出库数量：%d ",p->rks ,p->cc,p->ccs);
		                        printf("保管人：%s 进货时间：%s 出货时间：%s\n",p->bgr,p->jh,p->ch );
				  }
		  }break;

	  }
	  }
  }
}
void rexiu(zeng *head)
{
	int a,b,d,e,f,g;
	char z[100];
	zeng *p,*q;
	p=(zeng*)malloc(sizeof(struct zeng));
   printf("修改特定编号材料的信息按1\n");
   printf("修改特定名称材料的信息按2\n");
   scanf("%d",&a);
   if(a==1)
   {
	   printf("请输入所查找材料的编号\n");
			  scanf("%d",&b);
			  for(p=head->next ;p!=NULL;p=p->next )
				  if(p->bh ==b)
					 {
		                 p->cc=p->rks - p->ccs ;
						 printf("现在显示该材料信息\n");
		                    printf("编号：%d 名称：%s 单价：%d ",p->bh,p->mc,p->dj );
		                       printf("入库数量：%d 库存数量：%d 出库数量：%d ",p->rks ,p->cc,p->ccs);
		                        printf("保管人：%s 进货时间：%s 出货时间：%s\n",p->bgr,p->jh,p->ch );
								printf("现在请重新输入相关数据\n");
								printf("请用±数据表示单价变动,0表示不变\n");
									scanf("%d",&d);
									p->dj =p->dj +d;
								printf("请用±数据表示库存变动,0表示不变\n");
								scanf("%d",&e);
									p->cc=p->cc+e;
									if(e>0)
										p->rks =p->rks +e;
									else
										p->ccs =p->ccs -e;
                                printf("如若想重新输入保管人请按1，0表示不变\n");
								scanf("%d",&f);
								if(f==1)
								{
									printf("请重新输入保管人\n");
									scanf("%s",p->bgr );
								}
								printf("如若想重新输入出货时间请按1，0表示不变\n");
								scanf("%d",&g);
								if(g==1)
								{
									printf("请重新输入出货时间\n");
									scanf("%s",p->ch  );
								}
				  }

   }
      if(a==2)
   {
	   printf("请输入所查找材料的名称\n");
			  scanf("%s",z);
			  for(p=head->next ;p!=NULL;p=p->next )
				  if(strcmp(z,p->mc )==0)
					 {
		                 p->cc=p->rks - p->ccs ;
						 printf("现在显示该材料信息\n");
		                    printf("编号：%d 名称：%s 单价：%d ",p->bh,p->mc,p->dj );
							printf("入库数量：%d 库存数量：%d 出库数量：%d ",p->rks ,p->cc,p->ccs);
		                        printf("保管人：%s 进货时间：%s 出货时间：%s\n",p->bgr,p->jh,p->ch );
								printf("现在请重新输入相关数据\n");
								printf("请用±数据表示单价变动,0表示不变\n");
									scanf("%d",&d);
									p->dj =p->dj +d;
								printf("请用±数据表示库存变动,0表示不变\n");
								scanf("%d",&e);
									p->cc=p->cc+e;
									if(e>0)
										p->rks =p->rks +e;
									else
										p->ccs =p->ccs -e;
                                printf("如若想重新输入保管人请按1，0表示不变\n");
								scanf("%d",&f);
								if(f==1)
								{
									printf("请重新输入保管人\n");
									scanf("%s",p->bgr );
								}
								printf("如若想重新输入出货时间请按1，0表示不变\n");
								scanf("%d",&g);
								if(g==1)
								{
									printf("请重新输入出货时间\n");
									scanf("%s",p->ch  );
								}
								system("cls");
								printf("现在显示修改后该材料信息\n");
		                    printf("编号：%d 名称：%s 单价：%d ",p->bh,p->mc,p->dj );
		                       printf("入库数量：%d 库存数量：%d 出库数量：%d ",p->rks ,p->cc,p->ccs);
		                        printf("保管人：%s 进货时间：%s 出货时间：%s\n",p->bgr,p->jh,p->ch );
				  }

   }

}
void Print(zeng* head)//输出函数，遍历链表
{
	int  i=0;
	zeng *p;
	p=(zeng*)malloc(sizeof(struct zeng));
   for(p=head->next  ;p  != NULL ;p=p->next )
       {
		   p->cc =p->rks - p->ccs ;
		   printf("编号：%d 名称：%s 单价：%d ",p->bh,p->mc,p->dj );
		   printf("入库数量：%d 库存数量：%d 出库数量：%d ",p->rks ,p->cc ,p->ccs);
		   printf("保管人：%s 进货时间：%s 出货时间：%s\n",p->bgr,p->jh,p->ch );
   }
}
int main()
{
    
	zeng *head,*file;
	file=(zeng*)malloc(sizeof(struct zeng));
	printf("         ********您已进入材料管理系统**********\n");
	
	 printf("按1录入材料信息\n");
	 printf("按2显示所有材料信息\n");
	 printf("按3查找材料\n");
	 printf("按4修改材料信息\n");
	 printf("按-1退出程序\n");
	 
	 int a,b;
	 while(1)
	 {
		 scanf("%d",&a);
		 if(a==-1)
			 break;
		 else
			 switch(a)
		 {
			 case 1:
				 {  
					 printf("第一次录入信息输入1，反之输入2\n");
					 scanf("%d",&b);
				    if(b==1)
						 head=creat();//第一次输入材料数据
				       else
						   head=creat2(head);	//在原有数据上继续输入			         
				 }
				 system("cls");
				 	printf("         ********您已进入材料管理系统**********\n");
	                printf("按-1退出程序\n");
	                printf("按1录入材料信息\n");
					printf("按2显示所有材料信息\n");
	                printf("按3查找材料\n");
					printf("按4修改材料信息\n");
					
		 break;
			 case 2:
					 Print(head);
                  system("pause");
				 system("cls");
				 	printf("         ********您已进入材料管理系统**********\n");
	                printf("按-1退出程序\n");
	                printf("按1录入材料信息\n");printf("按2显示所有材料信息\n");
	                printf("按3查找材料\n");
					printf("按4修改材料信息\n");
					break;
			 case 3:
				   find(head);
				   system("pause");
				 system("cls");
				 	printf("         ********您已进入材料管理系统**********\n");
	                printf("按-1退出程序\n");
	                printf("按1录入材料信息\n");printf("按2显示所有材料信息\n");
	                printf("按3查找材料\n");
					printf("按4修改材料信息\n");
					break;
			 case 4:
				   rexiu(head);
				   system("pause");
				 system("cls");
				 	printf("         ********您已进入材料管理系统**********\n");
	                printf("按-1退出程序\n");
	                printf("按1录入材料信息\n");printf("按2显示所有材料信息\n");
	                printf("按3查找材料\n");
					printf("按4修改材料信息\n");
					break;

				 
				 
		 }
	 }
	 file=head->next ;
	 FILE *fp;//建立一个文件指针，将链表写入其中。
	 if(!(fp=fopen("材料系统.txt","w+")))
		 printf("error");
	 else
	 {
		 for(file=head->next ;file!=NULL;file=file->next)
		 {
			 fprintf(fp,"编号：%d 名称：%s 单价：%d",file->bh,file->mc ,file->dj );
			 fprintf(fp,"入库数量：%d 库存数量：%d 出库数量：%d",file->rks ,file->cc,file->ccs );
			 fprintf(fp,"保管人：%s 进货时间：%s 出货时间：%s\n",file->bgr ,file->jh ,file->ch );
		 }
	 }
	 fclose(fp);
	 system("pause");
	 return 0;
}