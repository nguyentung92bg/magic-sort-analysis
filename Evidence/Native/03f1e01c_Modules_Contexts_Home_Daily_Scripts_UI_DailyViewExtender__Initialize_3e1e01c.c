/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyViewExtender$$Initialize
void Modules_Contexts_Home_Daily_Scripts_UI_DailyViewExtender__Initialize (Modules_Contexts_Home_Daily_Scripts_UI_DailyViewExtender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyViewExtender$$Initialize
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyViewExtender__Initialize
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyViewExtender_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyViewExtender__Initialize_3e1e01c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c38146 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a5ca0);
    FUN_012d0dc8(PTR_DAT_05778ae0);
    FUN_012d0dc8(PTR_DAT_057c0828);
    FUN_012d0dc8(PTR_DAT_057a6c70);
    bRam0000000005c38146 = 1;
  }
  puVar2 = PTR_DAT_057a5ca0;
  puVar1 = PTR_DAT_05778ae0;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_057a6c70);
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_38,*(undefined8 *)puVar1);
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_38,*(undefined8 *)puVar2);
        return;
      }
      if (lStack_28 == 0) break;
      UnityEngine_GameObject__SetActive_408e318(lStack_28,1,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

