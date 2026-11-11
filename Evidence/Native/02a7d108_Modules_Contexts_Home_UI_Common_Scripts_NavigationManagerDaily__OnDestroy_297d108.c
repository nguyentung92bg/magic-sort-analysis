/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.NavigationManagerDaily$$OnDestroy
void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__OnDestroy (Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.NavigationManagerDaily$$OnDestroy
   void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__OnDestroy
   (Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__OnDestroy_297d108(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c2d73d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f16e8);
    FUN_012d0dc8(PTR_DAT_057a57e0);
    FUN_012d0dc8(PTR_DAT_057a7e98);
    FUN_012d0dc8(PTR_DAT_057f4770);
    bRam0000000005c2d73d = 1;
  }
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x68),0,0);
  }
  puVar2 = PTR_DAT_057f16e8;
  puVar1 = PTR_DAT_057a57e0;
  if (*(long *)(param_1 + 0x58) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_057f4770);
    while (uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_38,*(undefined8 *)puVar1), (uVar3 & 1) != 0) {
      if (lStack_28 != 0) {
        DG_Tweening_TweenExtensions__Kill_1edd6a4(lStack_28,0,0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_38,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

