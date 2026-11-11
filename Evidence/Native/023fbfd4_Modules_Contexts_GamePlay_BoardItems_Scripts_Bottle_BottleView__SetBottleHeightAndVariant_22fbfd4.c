/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$SetBottleHeightAndVariant
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__SetBottleHeightAndVariant (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, int32_t height, int32_t variant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$SetBottleHeightAndVariant
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__SetBottleHeightAndVariant
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, int32_t height,
   int32_t variant, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__SetBottleHeightAndVariant_22fbfd4
               (long param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
                    /* try { // try from 023fbff0 to 024fbff7 has its CatchHandler @ 023fc0a4 */
                    /* try { // try from 023fbff8 to 024fc077 has its CatchHandler @ 023fbd60 */
  if ((bRam0000000005c2a5fa & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05796348);
    FUN_012d0dc8(PTR_DAT_057e00d8);
    FUN_012d0dc8(PTR_DAT_057b6680);
    FUN_012d0dc8(PTR_DAT_05773510);
    bRam0000000005c2a5fa = 1;
  }
  puVar3 = PTR_DAT_057e00d8;
  puVar2 = PTR_DAT_05796348;
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_68,*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_05773510);
    uStack_48 = uStack_60;
    uStack_50 = uStack_68;
    lStack_40 = lStack_58;
                    /* try { // try from 023fc078 to 024fc07b has its CatchHandler @ 023fc09c */
                    /* try { // try from 023fc07c to 024fc07f has its CatchHandler @ 023fc098 */
                    /* try { // try from 023fc080 to 024fc083 has its CatchHandler @ 023fc09c */
                    /* try { // try from 023fc084 to 024fc087 has its CatchHandler @ 023fbd60 */
    while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_50,*(undefined8 *)puVar3), (uVar4 & 1) != 0) {
                    /* try { // try from 023fc088 to 024fc08b has its CatchHandler @ 023fc094 */
                    /* try { // try from 023fc08c to 024fc0c7 has its CatchHandler @ 023fbd60 */
      if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 023fc088 with catch @ 023fc094
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 023fc07c with catch @ 023fc098
                        */
      if (*(int *)(lStack_40 + 0x10) == param_2) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 023fc078 with catch @ 023fc09c
                       catch(type#1 @ 054cbd58) { ... } // from try @ 023fc080 with catch @ 023fc09c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 023fbf74 with catch @ 023fc0a0
                        */
        if (param_2 == 1) {
          if (*(int *)(lStack_40 + 0x78) == param_3) {
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__EnableBottleVisuals_22fc854
                      (param_1,lStack_40);
          }
          else {
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__DisableBottleVisuals_22fc954
                      (uVar4,lStack_40);
          }
        }
        else {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 023fbff0 with catch @ 023fc0a4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 023fbe8c with catch @ 023fc0a8
                        */
          if (param_2 == 4) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 023fbecc with catch @ 023fc0ac
                        */
            if (*(int *)(lStack_40 + 0x78) == param_3) {
              Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__EnableBottleVisuals_22fc854
                        (param_1,lStack_40);
            }
            else {
              Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__DisableBottleVisuals_22fc954
                        (uVar4,lStack_40);
                    /* try { // try from 023fc108 to 024fc12f has its CatchHandler @ 023fc150 */
            }
          }
          else {
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__EnableBottleVisuals_22fc854
                      (param_1,lStack_40);
          }
        }
      }
      else {
                    /* try { // try from 023fc0c8 to 024fc0cb has its CatchHandler @ 023fc144 */
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__DisableBottleVisuals_22fc954
                  (uVar4,lStack_40);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_50,*(undefined8 *)puVar2);
    puVar1 = (undefined8 *)(param_1 + 0x100);
                    /* try { // try from 023fc130 to 024fc13b has its CatchHandler @ 023fbd60 */
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0xa8);
    FUN_012d0d74(puVar1);
                    /* try { // try from 023fc13c to 024fc143 has its CatchHandler @ 023fc150 */
    if (param_2 == 1) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023fc108 with catch @ 023fc150
                       catch(type#2 @ 00000000) { ... } // from try @ 023fc13c with catch @ 023fc150
                        */
      puVar5 = (undefined8 *)(param_1 + 0xb8);
    }
    else {
                    /* catch() { ... } // from try @ 023fc0c8 with catch @ 023fc144 */
      if (param_2 != 2) {
        return;
      }
      puVar5 = (undefined8 *)(param_1 + 0xb0);
    }
    *puVar1 = *puVar5;
    FUN_012d0d74(puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

