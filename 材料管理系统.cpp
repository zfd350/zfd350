#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct zeng
{
	int bh,dj,rks,ccs,cc;
	char mc[1000],bgr[1000],jh[1000],ch[1000];
	struct zeng *next;
}zeng;
zeng*creat()//��������
{
   int i=1;
   zeng *p,*q,*head = NULL;
   q=(zeng*)malloc(sizeof(struct zeng));
   p=(zeng*)malloc(sizeof(struct zeng));
   head=(zeng*)malloc(sizeof(struct zeng));
   printf("��������ϱ��\n");    scanf("%d",&p->bh);		
   printf("�������������\n");     scanf("%s",p->mc);	    
   printf("�����뱣����\n");       scanf("%s",p->bgr);
   printf("���뵥��\n�������\n��������\n");	scanf("%d%d%d",&p->dj ,&p->rks ,&p->ccs );
   printf("����ʱ��\n����ʱ��//0��ʾδ����\n");    scanf("%s %s",p->jh,p->ch);
        head->next =p;
  for(i=0;p->bh !=0;i++)
   {
	  printf("���ٴ�������ϱ��,�Ա��0��������\n");scanf("%d",&q->bh);
	  if(q->bh ==0)
		  break;
	    printf("�������������\n"); scanf("%s",q->mc);    
	    printf("�����뱣����\n");scanf("%s",q->bgr);
		printf("���뵥��\n�������\n��������\n");scanf("%d%d%d",&q->dj ,&q->rks ,&q->ccs );
	    printf("����ʱ��\n����ʱ��//0��ʾδ����\n");scanf("%s %s",q->jh,q->ch);
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
	  }//����ԭ����ĩβ����ʹ��ָ���½ڵ�
   for(;p->bh !=0;)
   {
	  printf("���ٴ�������ϱ��,�Ա��0��������\n");scanf("%d",&q1->bh);
	  if(q1->bh ==0)
		  break;
	    printf("�������������\n"); scanf("%s",q1->mc);    
	    printf("�����뱣����\n");scanf("%s",q1->bgr);
		printf("���뵥��\n�������\n��������\n");scanf("%d%d%d",&q1->dj ,&q1->rks ,&q1->ccs );
	    printf("����ʱ��\n����ʱ��//0��ʾδ����\n");scanf("%s %s",q1->jh,q1->ch);
		p->next =q1;
		p=q1;
		q1=(zeng*)malloc(sizeof(struct zeng));
   }//�����½ڵ�
   p->next =NULL;
   return (head);
}
void find(zeng * head)
{
  printf("���ݱ�Ų����밴1\n");
  printf("�������Ʋ����밴2\n");
  printf("���ݵ��۲����밴3\n");
  printf("���ݽ���ʱ������밴4\n");
  printf("���ݳ���ʱ������밴5\n");
  printf("���ݱ����˲����밴6\n");
  printf("�Ƴ������밴-1\n");
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
			  printf("�����������Ҳ��ϵı��\n");
			  scanf("%d",&b);
			  for(p=head->next ;p!=NULL;p=p->next )
				  if(p->bh ==b)
					 {
		                 p->cc=p->rks - p->ccs ;
		                    printf("��ţ�%d ���ƣ�%s ���ۣ�%d ",p->bh,p->mc,p->dj );
		                       printf("���������%d ���������%d ����������%d ",p->rks ,p->cc,p->ccs);
		                        printf("�����ˣ�%s ����ʱ�䣺%s ����ʱ�䣺%s\n",p->bgr,p->jh,p->ch );
				  }
		  }break;
	  case 2:
		    {
			  printf("�����������Ҳ��ϵ�����\n");
			  scanf("%s",z);
			  for(p=head->next ;p!=NULL;p=p->next )
				  if(strcmp(z,p->mc )==0)
					 {
		                 p->cc=p->rks - p->ccs ;
		                    printf("��ţ�%d ���ƣ�%s ���ۣ�%d ",p->bh,p->mc,p->dj );
		                       printf("���������%d ���������%d ����������%d ",p->rks ,p->cc,p->ccs);
		                        printf("�����ˣ�%s ����ʱ�䣺%s ����ʱ�䣺%s\n",p->bgr,p->jh,p->ch );
				  }
		  }break;
	  case 3:
		    {
			  printf("�����������Ҳ��ϵĵ���\n");
			  scanf("%d",&b);
			  for(p=head->next ;p!=NULL;p=p->next )
				  if(p->dj ==b)
					 {
		                 p->cc=p->rks - p->ccs ;
		                    printf("��ţ�%d ���ƣ�%s ���ۣ�%d ",p->bh,p->mc,p->dj );
		                       printf("���������%d ���������%d ����������%d ",p->rks ,p->cc,p->ccs);
		                        printf("�����ˣ�%s ����ʱ�䣺%s ����ʱ�䣺%s\n",p->bgr,p->jh,p->ch );
				  }
		  }break;
	  case 4:
		    {
			  printf("�����������Ҳ��ϵĽ���ʱ��\n");
			  scanf("%s",z);
			  for(p=head->next ;p!=NULL;p=p->next )
				  if(strcmp(z,p->jh  )==0)
					 {
		                 p->cc=p->rks - p->ccs ;
		                    printf("��ţ�%d ���ƣ�%s ���ۣ�%d ",p->bh,p->mc,p->dj );
		                       printf("���������%d ���������%d ����������%d ",p->rks ,p->cc,p->ccs);
		                        printf("�����ˣ�%s ����ʱ�䣺%s ����ʱ�䣺%s\n",p->bgr,p->jh,p->ch ); 
				  }
		  }break;
	  case 5:
		    {
			  printf("�����������Ҳ��ϵĳ���ʱ��\n");
			  scanf("%s",z);
			  for(p=head->next ;p!=NULL;p=p->next )
				  if(strcmp(z,p->ch  )==0)
					 {
						 p->cc=p->rks - p->ccs ;
		                    printf("��ţ�%d ���ƣ�%s ���ۣ�%d ",p->bh,p->mc,p->dj );
		                       printf("���������%d ���������%d ����������%d ",p->rks ,p->cc,p->ccs);
		                        printf("�����ˣ�%s ����ʱ�䣺%s ����ʱ�䣺%s\n",p->bgr,p->jh,p->ch );
				  }
		  }break;
	  case 6:
		    {
			  printf("�����������Ҳ��ϵĳ���ʱ��\n");
			  scanf("%s",z);
			  for(p=head->next ;p!=NULL;p=p->next )
				  if(strcmp(z,p->bgr   )==0)
					 {
		                 p->cc=p->rks - p->ccs ;
		                    printf("��ţ�%d ���ƣ�%s ���ۣ�%d ",p->bh,p->mc,p->dj );
		                       printf("���������%d ���������%d ����������%d ",p->rks ,p->cc,p->ccs);
		                        printf("�����ˣ�%s ����ʱ�䣺%s ����ʱ�䣺%s\n",p->bgr,p->jh,p->ch );
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
   printf("�޸��ض���Ų��ϵ���Ϣ��1\n");
   printf("�޸��ض����Ʋ��ϵ���Ϣ��2\n");
   scanf("%d",&a);
   if(a==1)
   {
	   printf("�����������Ҳ��ϵı��\n");
			  scanf("%d",&b);
			  for(p=head->next ;p!=NULL;p=p->next )
				  if(p->bh ==b)
					 {
		                 p->cc=p->rks - p->ccs ;
						 printf("������ʾ�ò�����Ϣ\n");
		                    printf("��ţ�%d ���ƣ�%s ���ۣ�%d ",p->bh,p->mc,p->dj );
		                       printf("���������%d ���������%d ����������%d ",p->rks ,p->cc,p->ccs);
		                        printf("�����ˣ�%s ����ʱ�䣺%s ����ʱ�䣺%s\n",p->bgr,p->jh,p->ch );
								printf("���������������������\n");
								printf("���á����ݱ�ʾ���۱䶯,0��ʾ����\n");
									scanf("%d",&d);
									p->dj =p->dj +d;
								printf("���á����ݱ�ʾ���䶯,0��ʾ����\n");
								scanf("%d",&e);
									p->cc=p->cc+e;
									if(e>0)
										p->rks =p->rks +e;
									else
										p->ccs =p->ccs -e;
                                printf("�������������뱣�����밴1��0��ʾ����\n");
								scanf("%d",&f);
								if(f==1)
								{
									printf("���������뱣����\n");
									scanf("%s",p->bgr );
								}
								printf("�����������������ʱ���밴1��0��ʾ����\n");
								scanf("%d",&g);
								if(g==1)
								{
									printf("�������������ʱ��\n");
									scanf("%s",p->ch  );
								}
				  }

   }
      if(a==2)
   {
	   printf("�����������Ҳ��ϵ�����\n");
			  scanf("%s",z);
			  for(p=head->next ;p!=NULL;p=p->next )
				  if(strcmp(z,p->mc )==0)
					 {
		                 p->cc=p->rks - p->ccs ;
						 printf("������ʾ�ò�����Ϣ\n");
		                    printf("��ţ�%d ���ƣ�%s ���ۣ�%d ",p->bh,p->mc,p->dj );
							printf("���������%d ���������%d ����������%d ",p->rks ,p->cc,p->ccs);
		                        printf("�����ˣ�%s ����ʱ�䣺%s ����ʱ�䣺%s\n",p->bgr,p->jh,p->ch );
								printf("���������������������\n");
								printf("���á����ݱ�ʾ���۱䶯,0��ʾ����\n");
									scanf("%d",&d);
									p->dj =p->dj +d;
								printf("���á����ݱ�ʾ���䶯,0��ʾ����\n");
								scanf("%d",&e);
									p->cc=p->cc+e;
									if(e>0)
										p->rks =p->rks +e;
									else
										p->ccs =p->ccs -e;
                                printf("�������������뱣�����밴1��0��ʾ����\n");
								scanf("%d",&f);
								if(f==1)
								{
									printf("���������뱣����\n");
									scanf("%s",p->bgr );
								}
								printf("�����������������ʱ���밴1��0��ʾ����\n");
								scanf("%d",&g);
								if(g==1)
								{
									printf("�������������ʱ��\n");
									scanf("%s",p->ch  );
								}
								system("cls");
								printf("������ʾ�޸ĺ�ò�����Ϣ\n");
		                    printf("��ţ�%d ���ƣ�%s ���ۣ�%d ",p->bh,p->mc,p->dj );
		                       printf("���������%d ���������%d ����������%d ",p->rks ,p->cc,p->ccs);
		                        printf("�����ˣ�%s ����ʱ�䣺%s ����ʱ�䣺%s\n",p->bgr,p->jh,p->ch );
				  }

   }

}
void Print(zeng* head)//�����������������
{
	int  i=0;
	zeng *p;
	p=(zeng*)malloc(sizeof(struct zeng));
   for(p=head->next  ;p  != NULL ;p=p->next )
       {
		   p->cc =p->rks - p->ccs ;
		   printf("��ţ�%d ���ƣ�%s ���ۣ�%d ",p->bh,p->mc,p->dj );
		   printf("���������%d ���������%d ����������%d ",p->rks ,p->cc ,p->ccs);
		   printf("�����ˣ�%s ����ʱ�䣺%s ����ʱ�䣺%s\n",p->bgr,p->jh,p->ch );
   }
}
int main()
{
    
	zeng *head,*file;
	file=(zeng*)malloc(sizeof(struct zeng));
	printf("         ********���ѽ�����Ϲ���ϵͳ**********\n");
	
	 printf("��1¼�������Ϣ\n");
	 printf("��2��ʾ���в�����Ϣ\n");
	 printf("��3���Ҳ���\n");
	 printf("��4�޸Ĳ�����Ϣ\n");
	 printf("��-1�˳�����\n");
	 
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
					 printf("��һ��¼����Ϣ����1����֮����2\n");
					 scanf("%d",&b);
				    if(b==1)
						 head=creat();//��һ�������������
				       else
						   head=creat2(head);	//��ԭ�������ϼ�������			         
				 }
				 system("cls");
				 	printf("         ********���ѽ�����Ϲ���ϵͳ**********\n");
	                printf("��-1�˳�����\n");
	                printf("��1¼�������Ϣ\n");
					printf("��2��ʾ���в�����Ϣ\n");
	                printf("��3���Ҳ���\n");
					printf("��4�޸Ĳ�����Ϣ\n");
					
		 break;
			 case 2:
					 Print(head);
                  system("pause");
				 system("cls");
				 	printf("         ********���ѽ�����Ϲ���ϵͳ**********\n");
	                printf("��-1�˳�����\n");
	                printf("��1¼�������Ϣ\n");printf("��2��ʾ���в�����Ϣ\n");
	                printf("��3���Ҳ���\n");
					printf("��4�޸Ĳ�����Ϣ\n");
					break;
			 case 3:
				   find(head);
				   system("pause");
				 system("cls");
				 	printf("         ********���ѽ�����Ϲ���ϵͳ**********\n");
	                printf("��-1�˳�����\n");
	                printf("��1¼�������Ϣ\n");printf("��2��ʾ���в�����Ϣ\n");
	                printf("��3���Ҳ���\n");
					printf("��4�޸Ĳ�����Ϣ\n");
					break;
			 case 4:
				   rexiu(head);
				   system("pause");
				 system("cls");
				 	printf("         ********���ѽ�����Ϲ���ϵͳ**********\n");
	                printf("��-1�˳�����\n");
	                printf("��1¼�������Ϣ\n");printf("��2��ʾ���в�����Ϣ\n");
	                printf("��3���Ҳ���\n");
					printf("��4�޸Ĳ�����Ϣ\n");
					break;

				 
				 
		 }
	 }
	 file=head->next ;
	 FILE *fp;//����һ���ļ�ָ�룬������д�����С�
	 if(!(fp=fopen("����ϵͳ.txt","w+")))
		 printf("error");
	 else
	 {
		 for(file=head->next ;file!=NULL;file=file->next)
		 {
			 fprintf(fp,"��ţ�%d ���ƣ�%s ���ۣ�%d",file->bh,file->mc ,file->dj );
			 fprintf(fp,"���������%d ���������%d ����������%d",file->rks ,file->cc,file->ccs );
			 fprintf(fp,"�����ˣ�%s ����ʱ�䣺%s ����ʱ�䣺%s\n",file->bgr ,file->jh ,file->ch );
		 }
	 }
	 fclose(fp);
	 system("pause");
	 return 0;
}