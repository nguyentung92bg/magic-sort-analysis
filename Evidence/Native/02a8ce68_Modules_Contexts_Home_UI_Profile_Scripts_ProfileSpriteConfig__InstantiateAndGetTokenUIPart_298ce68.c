/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteConfig$$InstantiateAndGetTokenUIPart
UnityEngine_GameObject_o* Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteConfig__InstantiateAndGetTokenUIPart (Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteConfig_o* __this, System_String_o* tokenId, UnityEngine_Transform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteConfig$$InstantiateAndGetTokenUIPart
   UnityEngine_GameObject_o*
   Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteConfig__InstantiateAndGetTokenUIPart
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteConfig_o* __this, System_String_o*
   tokenId, UnityEngine_Transform_o* parent, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteConfig__InstantiateAndGetTokenUIPart_298ce68
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_057c90d8;
  if ((bRam0000000005c2d7db & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578aaf0);
    FUN_012d0dc8(PTR_DAT_057dfb38);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_05799138);
    FUN_012d0dc8(PTR_DAT_057607b8);
    FUN_012d0dc8(PTR_DAT_057c90d8);
                    /* try { // try from 02a8cee0 to 02b8cee3 has its CatchHandler @ 02a8cf04 */
    bRam0000000005c2d7db = 1;
  }
                    /* try { // try from 02a8cee4 to 02b8cee7 has its CatchHandler @ 02a8cf00 */
                    /* try { // try from 02a8cee8 to 02b8ceeb has its CatchHandler @ 02a8cf04 */
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_05799138;
                    /* try { // try from 02a8ceec to 02b8ceef has its CatchHandler @ 02a8cc30 */
  if (lVar3 != 0) {
                    /* try { // try from 02a8cef0 to 02b8cef3 has its CatchHandler @ 02a8cefc */
                    /* try { // try from 02a8cef4 to 02b8cf2b has its CatchHandler @ 02a8cc30 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a8cef0 with catch @ 02a8cefc
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a8cee4 with catch @ 02a8cf00
                        */
    System_Object___ctor_23dfe5c(lVar3,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a8cee0 with catch @ 02a8cf04
                       catch(type#1 @ 054cbd58) { ... } // from try @ 02a8cee8 with catch @ 02a8cf04
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a8ce18 with catch @ 02a8cf08
                        */
    *(undefined8 *)(lVar3 + 0x10) = param_2;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a8ce5c with catch @ 02a8cf0c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a8cd44 with catch @ 02a8cf10
                        */
    FUN_012d0d74((undefined8 *)(lVar3 + 0x10),param_2);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a8cd84 with catch @ 02a8cf14
                        */
    lVar6 = *(long *)(param_1 + 0x38);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 02a8cf2c to 02b8cf2f has its CatchHandler @ 02a8cfa8 */
    if ((lVar4 != 0) &&
       (System_Predicate_object____ctor_30fcf30(lVar4,lVar3,*(undefined8 *)PTR_DAT_057607b8,0),
       lVar6 != 0)) {
      lVar3 = System_Collections_Generic_List_object___Find_21fd130
                        (lVar6,lVar4,*(undefined8 *)PTR_DAT_0578aaf0);
      puVar1 = PTR_DAT_0576c200;
      if (lVar3 != 0) {
                    /* try { // try from 02a8cf6c to 02b8cf93 has its CatchHandler @ 02a8cfb4 */
        uVar7 = *(undefined8 *)(lVar3 + 0x30);
        if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar5 = UnityEngine_Object__op_Inequality_408e110(uVar7,0,0);
        puVar2 = PTR_DAT_057dfb38;
        if ((uVar5 & 1) != 0) {
                    /* try { // try from 02a8cf94 to 02b8cf9f has its CatchHandler @ 02a8cc30 */
          uVar7 = *(undefined8 *)(lVar3 + 0x30);
                    /* try { // try from 02a8cfa0 to 02b8cfa7 has its CatchHandler @ 02a8cfb4 */
                    /* catch() { ... } // from try @ 02a8cf2c with catch @ 02a8cfa8 */
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          puVar1 = PTR_DAT_0576c200;
          lVar3 = *(long *)puVar2;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02a8cf6c with catch @ 02a8cfb4
                       catch(type#2 @ 00000000) { ... } // from try @ 02a8cfa0 with catch @ 02a8cfb4
                        */
          if ((bRam0000000005c2e95c & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_0576c200);
            bRam0000000005c2e95c = 1;
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
                    /* WARNING: Could not recover jumptable at 0x02bac96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (**(code **)(**(long **)(lVar3 + 0x38) + 8))(uVar7,param_3,0);
          return uVar7;
        }
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

