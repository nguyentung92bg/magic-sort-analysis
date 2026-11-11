/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.NavigationManagerDaily$$GetIndexByPageType
int32_t Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__GetIndexByPageType (Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily_o* __this, int32_t pageType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.NavigationManagerDaily$$GetIndexByPageType
   int32_t Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__GetIndexByPageType
   (Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily_o* __this, int32_t pageType,
   const MethodInfo* method); */

int Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__GetIndexByPageType_297cefc
              (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02a7cf14 to 02b7cf1f has its CatchHandler @ 02a7cfb4 */
    FUN_012d0ef0();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x70) + 0x20);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0(0,param_2,0);
  }
  if ((bRam0000000005c2fca9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575e990);
    FUN_012d0dc8(PTR_DAT_05813708);
    bRam0000000005c2fca9 = 1;
  }
  puVar1 = PTR_DAT_05813708;
  lVar3 = *(long *)(lVar2 + 0x30);
  if (lVar3 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar4) {
        return 0;
      }
      lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar3,iVar4,*(undefined8 *)puVar1);
      if (lVar3 == 0) break;
      if (*(int *)(lVar3 + 0x18) == (int)param_2) {
        return iVar4;
      }
      lVar3 = *(long *)(lVar2 + 0x30);
      iVar4 = iVar4 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

