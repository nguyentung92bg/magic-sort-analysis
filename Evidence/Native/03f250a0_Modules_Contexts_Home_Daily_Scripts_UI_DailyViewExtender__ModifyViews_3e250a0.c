/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyViewExtender$$ModifyViews
void Modules_Contexts_Home_Daily_Scripts_UI_DailyViewExtender__ModifyViews (Modules_Contexts_Home_Daily_Scripts_UI_DailyViewExtender_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyViewExtender$$ModifyViews
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyViewExtender__ModifyViews
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyViewExtender_o* __this, bool isActive, const
   MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyViewExtender__ModifyViews_3e250a0
               (long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c38146 & 1) == 0) {
                    /* try { // try from 03f250c8 to 04025127 has its CatchHandler @ 03f250c8
                       catch() { ... } // from try @ 03f250c8 with catch @ 03f250c8
                       catch() { ... } // from try @ 03f2515c with catch @ 03f250c8
                       catch() { ... } // from try @ 03f251a0 with catch @ 03f250c8
                       catch() { ... } // from try @ 03f251d8 with catch @ 03f250c8 */
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
                    /* try { // try from 03f25128 to 0402512b has its CatchHandler @ 03f25168 */
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_057a6c70);
    while( true ) {
                    /* try { // try from 03f25138 to 04025143 has its CatchHandler @ 03f25170 */
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_38,*(undefined8 *)puVar1);
      if ((uVar3 & 1) == 0) {
                    /* try { // try from 03f25158 to 0402515b has its CatchHandler @ 03f2516c */
                    /* try { // try from 03f2515c to 04025187 has its CatchHandler @ 03f250c8 */
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_38,*(undefined8 *)puVar2);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03f25128 with catch @ 03f25168
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03f25158 with catch @ 03f2516c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03f25138 with catch @ 03f25170
                        */
        return;
      }
      if (lStack_28 == 0) break;
      UnityEngine_GameObject__SetActive_408e318(lStack_28,param_2 & 1,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

