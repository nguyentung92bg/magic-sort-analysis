/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileNameStyleSelectionContainer$$DisableEmptyNameStyles
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer__DisableEmptyNameStyles (Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer_o* __this, int32_t nameStyleCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.UI.Profile.Scripts.ProfileNameStyleSelectionContainer$$DisableEmptyNameStyles
   void 
   Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer__DisableEmptyNameStyles
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer_o* __this, int32_t
   nameStyleCount, const MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileNameStyleSelectionContainer__DisableEmptyNameStyles_298b330
               (long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  
                    /* try { // try from 02a8b33c to 02b8b34f has its CatchHandler @ 02a8b35c */
  if ((bRam0000000005c2d7c3 & 1) == 0) {
                    /* try { // try from 02a8b350 to 02b8b373 has its CatchHandler @ 02a8b2fc */
    FUN_012d0dc8(PTR_DAT_05807e10);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a8b33c with catch @ 02a8b35c
                        */
    FUN_012d0dc8(PTR_DAT_0575d018);
    bRam0000000005c2d7c3 = 1;
  }
  puVar1 = PTR_DAT_0575d018;
  lVar2 = *(long *)(param_1 + 0x18);
  while (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) <= param_2) {
                    /* catch() { ... } // from try @ 02a8b374 with catch @ 02a8b3c4
                       catch() { ... } // from try @ 02a8b3b4 with catch @ 02a8b3c4 */
                    /* try { // try from 02a8b3c8 to 02b8b3cb has its CatchHandler @ 02a8b3d4 */
      return;
    }
                    /* try { // try from 02a8b38c to 02b8b3b3 has its CatchHandler @ 02a8b2fc */
    lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar2,param_2,*(undefined8 *)puVar1);
    if ((lVar2 == 0) || (lVar2 = UnityEngine_Component__get_gameObject_408b480(lVar2,0), lVar2 == 0)
       ) break;
    UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
                    /* try { // try from 02a8b3b4 to 02b8b3c3 has its CatchHandler @ 02a8b3c4 */
    param_2 = param_2 + 1;
    lVar2 = *(long *)(param_1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

