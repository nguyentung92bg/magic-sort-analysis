/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopup$$Show
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopup__Show (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopup_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.StuckPopup$$Show
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopup__Show
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopup_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_StuckPopup__Show_1606f10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = PTR_DAT_0576aae0;
                    /* try { // try from 01706f14 to 01806f23 has its CatchHandler @ 01706fe4 */
                    /* try { // try from 01706f24 to 01806fd3 has its CatchHandler @ 01706cc0 */
  if ((bRam0000000005c243f7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05805608);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579ab60);
    FUN_012d0dc8(PTR_DAT_057b8fd8);
    FUN_012d0dc8(PTR_DAT_05802fe0);
    FUN_012d0dc8(PTR_DAT_057d3568);
    bRam0000000005c243f7 = 1;
  }
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if ((((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) &&
      (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar3,*(undefined8 *)PTR_DAT_05805608), lVar3 != 0)) &&
     ((*(long *)(lVar3 + 0x10) != 0 && (*(long *)(param_1 + 0x18) != 0)))) {
    Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_AStuckPopupVariant__Activate_16f766c
              (*(long *)(param_1 + 0x18),*(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x38),0);
                    /* try { // try from 01706fd4 to 01806fd7 has its CatchHandler @ 01706fe0 */
    plVar4 = *(long **)(param_1 + 0x18);
                    /* try { // try from 01706fd8 to 01806ffb has its CatchHandler @ 01706cc0 */
    if (plVar4 != (long *)0x0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01706fd4 with catch @ 01706fe0
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01706f14 with catch @ 01706fe4
                        */
      (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01706ed8 with catch @ 01706fe8
                        */
      plVar4 = *(long **)(param_1 + 0x18);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01706e7c with catch @ 01706fec
                        */
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0));
        puVar2 = PTR_DAT_057b8fd8;
        puVar1 = PTR_DAT_0579ab60;
                    /* try { // try from 01706ffc to 01806fff has its CatchHandler @ 01707084 */
        if (*(long *)(param_1 + 0x20) != 0) {
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_38,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_057d3568);
          while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                   (&uStack_38,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
            if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView__Initialize_16fa75c
                      (lStack_28,0);
                    /* try { // try from 01707048 to 0180706f has its CatchHandler @ 01707090 */
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_38,*(undefined8 *)puVar1);
          if (*(long *)(param_1 + 0x28) != 0) {
            Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton__Initialize_16f28f4
                      (*(long *)(param_1 + 0x28),0);
                    /* try { // try from 01707070 to 0180707b has its CatchHandler @ 01706cc0 */
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0170707c to 01807083 has its CatchHandler @ 01707090 */
  FUN_012d0ef0();
}

