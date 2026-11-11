/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.BoardItemContainer$$get_SerializerSettings
Newtonsoft_Json_JsonSerializerSettings_o* Modules_Infrastructure_Common_Scripts_Component_BoardItemContainer__get_SerializerSettings (Modules_Infrastructure_Common_Scripts_Component_BoardItemContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Infrastructure.Common.Scripts.Component.BoardItemContainer$$get_SerializerSettings
   Newtonsoft_Json_JsonSerializerSettings_o*
   Modules_Infrastructure_Common_Scripts_Component_BoardItemContainer__get_SerializerSettings
   (Modules_Infrastructure_Common_Scripts_Component_BoardItemContainer_o* __this, const MethodInfo*
   method); */

long Modules_Infrastructure_Common_Scripts_Component_BoardItemContainer__get_SerializerSettings_40ea9d4
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_DAT_057bea80;
  if ((bRam0000000005c3aa94 & 1) == 0) {
                    /* try { // try from 041ea9f8 to 042eaa0f has its CatchHandler @ 041eabc4 */
    FUN_012d0dc8(PTR_DAT_057bea80);
    FUN_012d0dc8(PTR_DAT_057cb758);
                    /* try { // try from 041eaa10 to 042eaa37 has its CatchHandler @ 041ea924 */
    FUN_012d0dc8(PTR_DAT_057737c0);
    FUN_012d0dc8(PTR_DAT_05769718);
    FUN_012d0dc8(PTR_DAT_0579a128);
                    /* try { // try from 041eaa38 to 042eaa47 has its CatchHandler @ 041eabc0 */
    bRam0000000005c3aa94 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_05769718;
  if (lVar3 != 0) {
                    /* try { // try from 041eaa50 to 042eaadf has its CatchHandler @ 041ead10 */
    Newtonsoft_Json_JsonSerializerSettings___ctor_3536b34(lVar3,0);
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling_354360c(lVar3,4,0);
    Newtonsoft_Json_JsonSerializerSettings__set_ReferenceLoopHandling_354338c(lVar3,1,0);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_0579a128;
    if (lVar4 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar4,*(undefined8 *)PTR_DAT_057737c0);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_057cb758;
      if (lVar5 != 0) {
        Newtonsoft_Json_JsonConverter___ctor_35384e0(lVar5,0);
        *(undefined8 *)(lVar5 + 0x10) = uVar9;
        FUN_012d0d74((undefined8 *)(lVar5 + 0x10),uVar9);
        lVar7 = *(long *)(lVar4 + 0x10);
        lVar8 = *(long *)puVar2;
                    /* try { // try from 041eaae8 to 042eaaf3 has its CatchHandler @ 041eabbc */
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
                    /* try { // try from 041eaaf4 to 042eab37 has its CatchHandler @ 041ea924 */
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *plVar6 = lVar5;
            FUN_012d0d74(plVar6,lVar5);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar4,lVar5);
          }
                    /* try { // try from 041eab38 to 042eab53 has its CatchHandler @ 041ead10 */
          *(long *)(lVar3 + 0xd8) = lVar4;
          FUN_012d0d74((long *)(lVar3 + 0xd8),lVar4);
                    /* try { // try from 041eab54 to 042eab93 has its CatchHandler @ 041ead0c */
          return lVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

