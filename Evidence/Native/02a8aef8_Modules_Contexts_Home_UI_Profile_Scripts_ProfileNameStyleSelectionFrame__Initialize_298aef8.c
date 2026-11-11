/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileNameStyleSelectionFrame$$Initialize
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionFrame__Initialize (Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionFrame_o* __this, Modules_Contexts_Application_Player_Scripts_ProfileNameStyleInfo_o* nameStyleInfo, bool isLocked, System_String_o* playerName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileNameStyleSelectionFrame$$Initialize
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionFrame__Initialize
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionFrame_o* __this,
   Modules_Contexts_Application_Player_Scripts_ProfileNameStyleInfo_o* nameStyleInfo, bool isLocked,
   System_String_o* playerName, const MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionFrame__Initialize_298aef8
               (long param_1,long param_2,byte param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  
                    /* try { // try from 02a8af04 to 02b8af5f has its CatchHandler @ 02a8ae08 */
  *(long *)(param_1 + 0x40) = param_2;
  FUN_012d0d74((long *)(param_1 + 0x40));
  *(byte *)(param_1 + 0x48) = param_3 & 1;
  if ((((*(long *)(param_1 + 0x30) != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x30),0),
       lVar2 != 0)) &&
      (UnityEngine_GameObject__SetActive_408e318(lVar2,param_3 & 1,0), param_2 != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
                    /* try { // try from 02a8af60 to 02b8af6f has its CatchHandler @ 02a8af70 */
    Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleView__Initialize_298202c
              (*(long *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x10),param_4);
    if (*(long *)(param_1 + 0x38) != 0) {
                    /* catch() { ... } // from try @ 02a8aeec with catch @ 02a8af70
                       catch() { ... } // from try @ 02a8af60 with catch @ 02a8af70 */
      lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x38),0);
                    /* try { // try from 02a8af74 to 02b8af77 has its CatchHandler @ 02a8af80 */
                    /* try { // try from 02a8af78 to 02b8af83 has its CatchHandler @ 02a8ae08 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02a8af74 with catch @ 02a8af80
                        */
      uVar1 = Modules_Contexts_Application_Player_Scripts_ProfileNameStyleInfo__get_IsTimeBased_137a2b0
                        (param_2,0);
      if (lVar2 != 0) {
        UnityEngine_GameObject__SetActive_408e318(lVar2,uVar1 & 1,0);
        Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionFrame__SetFrameActive_298b6a0
                  (param_1,0);
        lVar2 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
        if (lVar2 != 0) {
          if (pcRam0000000005c3a388 == (code *)0x0) {
            pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
          }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c3a388)(lVar2,1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

