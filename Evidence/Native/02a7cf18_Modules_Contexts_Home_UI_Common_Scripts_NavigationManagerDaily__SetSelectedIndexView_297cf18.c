/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.NavigationManagerDaily$$SetSelectedIndexView
void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__SetSelectedIndexView (Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily_o* __this, int32_t index, bool playAnimation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.NavigationManagerDaily$$SetSelectedIndexView
   void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__SetSelectedIndexView
   (Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily_o* __this, int32_t index, bool
   playAnimation, const MethodInfo* method); */

void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__SetSelectedIndexView_297cf18
               (long param_1,int param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
                    /* try { // try from 02a7cf20 to 02b7cfa3 has its CatchHandler @ 02a7cd50 */
  if ((bRam0000000005c2d73f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a5ca0);
    FUN_012d0dc8(PTR_DAT_05778ae0);
    FUN_012d0dc8(PTR_DAT_057c0828);
    FUN_012d0dc8(PTR_DAT_057a6c70);
    FUN_012d0dc8(PTR_DAT_057957a0);
    FUN_012d0dc8(PTR_DAT_0578c878);
    bRam0000000005c2d73f = 1;
  }
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_58 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* try { // try from 02a7cfa4 to 02b7cfa7 has its CatchHandler @ 02a7cfb0 */
                    /* try { // try from 02a7cfa8 to 02b7cfd3 has its CatchHandler @ 02a7cd50 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a7cfa4 with catch @ 02a7cfb0
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a7cf14 with catch @ 02a7cfb4
                        */
    lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (*(long *)(param_1 + 0x28),param_2,*(undefined8 *)PTR_DAT_0578c878);
    puVar3 = PTR_DAT_057a5ca0;
    puVar2 = PTR_DAT_057957a0;
    puVar1 = PTR_DAT_05778ae0;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a7ce5c with catch @ 02a7cfb8
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a7ce9c with catch @ 02a7cfbc
                        */
    if (*(long *)(param_1 + 0x28) != 0) {
                    /* try { // try from 02a7cfd4 to 02b7cfd7 has its CatchHandler @ 02a7d050 */
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_58,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_057a6c70);
      while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_58,*(undefined8 *)puVar1), (uVar5 & 1) != 0) {
        if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
                    /* try { // try from 02a7d014 to 02b7d03b has its CatchHandler @ 02a7d05c */
        UnityEngine_GameObject__SetActive_408e318(lStack_48,0,0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_58,*(undefined8 *)puVar3);
      if (lVar4 != 0) {
        UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
                    /* try { // try from 02a7d03c to 02b7d047 has its CatchHandler @ 02a7cd50 */
        if (*(int *)(param_1 + 0x60) != param_2) {
                    /* try { // try from 02a7d048 to 02b7d04f has its CatchHandler @ 02a7d05c */
          if (*(long *)(param_1 + 0x40) == 0) goto LAB_02a7d088;
                    /* catch() { ... } // from try @ 02a7cfd4 with catch @ 02a7d050 */
          uVar6 = System_Collections_Generic_List_HomeTabTransforms___get_Item_2049854
                            (*(long *)(param_1 + 0x40),param_2,*(undefined8 *)puVar2);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02a7d014 with catch @ 02a7d05c
                       catch(type#2 @ 00000000) { ... } // from try @ 02a7d048 with catch @ 02a7d05c
                        */
          Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__PlayPunchScale_297d264
                    (param_1,uVar6,param_3 & 1);
        }
        return;
      }
    }
  }
LAB_02a7d088:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

